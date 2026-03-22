import { BrowserRouter as Router, Routes, Route } from "react-router-dom";
import Navbar from "./components/Navbar";
import Hero from "./components/Hero";
import Features from "./components/Features";

// Faculty Pages
import IT from "./pages/IT";
import BFM from "./pages/BFM";
import HM from "./pages/HM";
import MassComm from "./pages/MassComm";

// Alumni Page
import Alumni from "./pages/Alumni";

export default function App() {
  return (
    <Router>
      <div className="min-h-screen bg-slate-50 font-sans">
        <Navbar />

        <Routes>
          {/* Home page */}
          <Route
            path="/"
            element={
              <>
                <Hero />
                <Features />
              </>
            }
          />

          {/* Faculty pages */}
          <Route path="/faculty/it" element={<IT />} />
          <Route path="/faculty/bfm" element={<BFM />} />
          <Route path="/faculty/hm" element={<HM />} />
          <Route path="/faculty/masscomm" element={<MassComm />} />

          {/* Alumni page */}
          <Route path="/alumni" element={<Alumni />} />
        </Routes>

        <footer className="bg-slate-900 text-white py-6 text-center">
          <p>&copy; 2026 IT Research Lab - KITM. All rights reserved.</p>
        </footer>
      </div>
    </Router>
  );
}
