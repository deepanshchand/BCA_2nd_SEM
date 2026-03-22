
import React from "react";
import "../pages/Faculty.css";

const facultyData = [
  {
    name: "Mr. Rajesh Sharma",
    title: "Head of Department",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "rajesh.sharma@kitm.edu",
    phone: "+91 9876543220",
  },
  {
    name: "Mrs. Sunita Patel",
    title: "Assistant Professor",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "sunita.patel@kitm.edu",
    phone: "+91 9876543221",
  },
  {
    name: "Mr. Rohan Mehta",
    title: "Lecturer",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "rohan.mehta@kitm.edu",
    phone: "+91 9876543222",
  },
  {
    name: "Mrs. Priya Singh",
    title: "Professor",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "priya.singh@kitm.edu",
    phone: "+91 9876543223",
  },
];

export default function HM() {
  return (
    <div className="faculty-container">
      <h1 className="faculty-title">HM Faculty Members</h1>

      <div className="faculty-grid">
        {facultyData.map((faculty, index) => (
          <div key={index} className="faculty-card">
            <img
              src={faculty.image}
              alt={faculty.name}
              className="faculty-image"
            />
            <div className="faculty-info">
              <h2>{faculty.name}</h2>
              <p>{faculty.title}</p>
              <p>Email: <a href={`mailto:${faculty.email}`} className="text-blue-600">{faculty.email}</a></p>
              <p>Phone: <a href={`tel:${faculty.phone}`} className="text-blue-600">{faculty.phone}</a></p>
            </div>
          </div>
        ))}
      </div>
    </div>
  );
}
