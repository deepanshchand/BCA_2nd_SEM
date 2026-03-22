import React from "react";
import "../pages/Faculty.css";

const facultyData = [
  {
    name: "Mr. Keshav Bhatt",
    title: "Head of Department",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "keshav.bhatt@kitm.edu",
    phone: "+91 9876543210",
  },
  {
    name: "Mr. Kamal Kishor Bhatt",
    title: "Assistant Professor",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "kamal.bhatt@kitm.edu",
    phone: "+91 9876543211",
  },
  {
    name: "Mr. Himanshu Bhatt",
    title: "Lecturer",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "himanshu.bhatt@kitm.edu",
    phone: "+91 9876543212",
  },
  {
    name: "Mrs. Lalita Joshi",
    title: "Professor",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "lalita.joshi@kitm.edu",
    phone: "+91 9876543213",
  },
  {
    name: "Dr. Bob Davis",
    title: "Assistant Professor",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "bob.davis@kitm.edu",
    phone: "+91 9876543214",
  },
];

export default function BFM() {
  return (
    <div className="faculty-container">
      <h1 className="faculty-title">BFM Faculty Members</h1>

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
