import { useState } from "react";
import { Link } from "react-router-dom";

export default function Navbar() {
  const [facultyOpen, setFacultyOpen] = useState(false);

  return (
    <nav className="flex justify-between items-center p-6 bg-white shadow-md relative">
      <h1 className="text-2xl font-bold text-blue-700 tracking-tight">
        IT<span className="text-slate-800">ResearchLab</span>
      </h1>
      <div className="space-x-6 text-slate-600 font-medium flex items-center">
        <Link to="/" className="hover:text-blue-600 transition">
          Home
        </Link>
        <Link to="#" className="hover:text-blue-600 transition">
          Research
        </Link>
        <Link to="#" className="hover:text-blue-600 transition">
          Publications
        </Link>

        {/* Faculty Dropdown */}
        <div className="relative inline-block">
          <button
            onClick={() => setFacultyOpen(!facultyOpen)}
            className="hover:text-blue-600 transition px-2 py-1"
          >
            Faculty
          </button>

          {facultyOpen && (
            <div className="absolute top-full left-0 mt-2 w-36 bg-white border rounded-md shadow-lg z-10">
              <Link
                to="/faculty/it"
                className="block px-4 py-2 hover:bg-blue-100"
                onClick={() => setFacultyOpen(false)}
              >
                IT
              </Link>
              <Link
                to="/faculty/bfm"
                className="block px-4 py-2 hover:bg-blue-100"
                onClick={() => setFacultyOpen(false)}
              >
                BFM
              </Link>
              <Link
                to="/faculty/hm"
                className="block px-4 py-2 hover:bg-blue-100"
                onClick={() => setFacultyOpen(false)}
              >
                HM
              </Link>
              <Link
                to="/faculty/masscomm"
                className="block px-4 py-2 hover:bg-blue-100"
                onClick={() => setFacultyOpen(false)}
              >
                MassComm
              </Link>
            </div>
          )}
        </div>

        {/* Alumni Button */}
        <Link to="/alumni" className="hover:text-blue-600 transition px-2 py-1">
          Alumni
        </Link>

        <Link to="#" className="bg-blue-600 text-white px-4 py-2 rounded-lg">
          Contact
        </Link>
      </div>
    </nav>
  );
}
