import React from "react";
import "../pages/Faculty.css";

const facultyData = [
  {
    name: "Mr. Sameer Khan",
    title: "Head of Department",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "sameer.khan@kitm.edu",
    phone: "+91 9876543230",
  },
  {
    name: "Mrs. Anjali Verma",
    title: "Assistant Professor",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "anjali.verma@kitm.edu",
    phone: "+91 9876543231",
  },
  {
    name: "Mr. Ravi Sharma",
    title: "Lecturer",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "ravi.sharma@kitm.edu",
    phone: "+91 9876543232",
  },
  {
    name: "Mrs. Neha Joshi",
    title: "Professor",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "neha.joshi@kitm.edu",
    phone: "+91 9876543233",
  },
];

export default function MassComm() {
  return (
    <div className="faculty-container">
      <h1 className="faculty-title">MassComm Faculty Members</h1>

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
