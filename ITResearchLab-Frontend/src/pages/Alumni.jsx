import React from "react";
import "../pages/Faculty.css"; // same CSS file for professional layout

const alumniData = [
  
  {
    name: "Mr. Nikhil Kapoor",
    title: "Software Developer",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "nikhil.kapoor@gmail.com",
    phone: "+91 9876500024",
  },
  {
    name: "Ms. Richa Gupta",
    title: "PR Manager",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "richa.gupta@gmail.com",
    phone: "+91 9876500025",
  },
  {
    name: "Mr. Manish Jain",
    title: "Entrepreneur",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "manish.jain@gmail.com",
    phone: "+91 9876500026",
  },
  {
    name: "Ms. Shalini Mehra",
    title: "Business Analyst",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "shalini.mehra@gmail.com",
    phone: "+91 9876500027",
  },
  {
    name: "Mr. Akash Verma",
    title: "Software Engineer",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "akash.verma@gmail.com",
    phone: "+91 9876500028",
  },
  {
    name: "Ms. Kritika Sharma",
    title: "UI/UX Designer",
    image: "https://thumbs.dreamstime.com/b/anonymous-male-profile-picture-isolated-32796656.jpg",
    email: "kritika.sharma@gmail.com",
    phone: "+91 9876500029",
  },
];

export default function Alumni() {
  return (
    <div className="faculty-container">
      <h1 className="faculty-title">Alumni Members</h1>

      <div className="faculty-grid">
        {alumniData.map((alumni, index) => (
          <div key={index} className="faculty-card">
            <img
              src={alumni.image}
              alt={alumni.name}
              className="faculty-image"
            />
            <div className="faculty-info">
              <h2>{alumni.name}</h2>
              <p>{alumni.title}</p>
              <p>Email: <a href={`mailto:${alumni.email}`} className="text-blue-600">{alumni.email}</a></p>
              <p>Phone: <a href={`tel:${alumni.phone}`} className="text-blue-600">{alumni.phone}</a></p>
            </div>
          </div>
        ))}
      </div>
    </div>
  );
}
