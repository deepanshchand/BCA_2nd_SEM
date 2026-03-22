const areas = [
  { title: "Computer Networks", desc: "Analyzing high-speed protocols and network security." },
  { title: "Operating Systems", desc: "Researching kernel efficiency and distributed systems." },
  { title: "Python Automation", desc: "Building scalable tools for data analysis and scripting." },
];

export default function Features() {
  return (
    <section className="py-16 px-6 grid md:grid-cols-3 gap-8 max-w-6xl mx-auto">
      {areas.map((item, index) => (
        <div key={index} className="p-8 bg-white border border-slate-200 rounded-2xl hover:shadow-xl transition">
          <h3 className="text-xl font-bold text-blue-700 mb-3">{item.title}</h3>
          <p className="text-slate-600 leading-relaxed">{item.desc}</p>
        </div>
      ))}
    </section>
  );
}