export default function Hero() {
  return (
    <header className="py-20 px-6 text-center bg-gradient-to-r from-blue-50 to-indigo-50">
      <h2 className="text-5xl font-extrabold text-slate-900 mb-4">
        Innovating the Future of <br />
        <span className="text-blue-600">Information Technology</span>
      </h2>
      <p className="text-lg text-slate-600 max-w-2xl mx-auto mb-8">
        Welcome to the IT Research Lab at KITM. We focus on cutting-edge developments 
        in Computer Networks, Operating Systems, and Intelligent Systems.
      </p>
      <button className="bg-blue-600 hover:bg-blue-700 text-white font-bold py-3 px-8 rounded-full transition shadow-lg">
        Explore Our Projects
      </button>
    </header>
  );
}