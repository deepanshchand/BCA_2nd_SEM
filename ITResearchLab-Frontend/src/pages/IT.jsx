import React from "react";
import "../pages/Faculty.css";

const facultyData = [
  {
    name: "Mr. Keshav Bhatt",
    title: "Head of Department",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "john.doe@kitm.edu",
    phone: "+91 9876543210",
  },
  {
    name: "Mr. kamal Kishor Bhatt",
    title: "Assistant Professor",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "jane.smith@kitm.edu",
    phone: "+91 9876543211",
  },
  {
    name: "Mr. Himanshu Bhatt",
    title: "Lecturer",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "mike.johnson@kitm.edu",
    phone: "+91 9876543212",
  },
  {
    name: "Mrs. Lalita Joshi",
    title: "Professor",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "alice.brown@kitm.edu",
    phone: "+91 9876543213",
  },
  {
    name: "Dr. Bob Davis",
    title: "Assistant Professor",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "bob.davis@kitm.edu",
    phone: "+91 9876543214",
  },
  
  {
    name: "Dr. Frank Martin",
    title: "Lecturer",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "frank.martin@kitm.edu",
    phone: "+91 9876543218",
  },

];

export default function IT() {
  return (
    <div className="faculty-container">
      <h1 className="faculty-title">IT Faculty Members</h1>

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
              <p>Email: {faculty.email}</p>
              <p>Phone: {faculty.phone}</p>
            </div>
          </div>
        ))}
      </div>
    </div>
  );
}
