<?xml version="1.0" encoding="UTF-8" ?>
<!DOCTYPE html>
<html b:version='2' class='v2' expr:dir='data:blog.languageDirection' xmlns='http://www.w3.org/1999/xhtml' xmlns:b='http://www.google.com/2005/gml/b' xmlns:data='http://www.google.com/2005/gml/data' xmlns:expr='http://www.google.com/2005/gml/expr'>
<head>
  <meta content='width=device-width,initial-scale=1,minimum-scale=1,maximum-scale=1' name='viewport'/>
  <title><data:blog.pageTitle/></title>
  <b:include data='blog' name='all-head-content'/>
  <link href='https://fonts.googleapis.com/css2?family=Amiri:wght@400;700&amp;family=Cairo:wght@300;400;600;700;800&amp;display=swap' rel='stylesheet'/>
  <link href='https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.0.0/css/all.min.css' rel='stylesheet'/>
  <b:skin><![CDATA[
    :root {
      --primary: #5c0000;
      --primary-dark: #2a0000;
      --accent: #c5a021;
      --accent-dark: #8a6d1b;
      --accent-hover: #e0b72f;
      --bg: #ffffff;
      --text: #1a1a1a;
      --text-light: #666;
      --nav-height: 85px;
      --transition: all 0.3s ease;
    }
    * { box-sizing: border-box; margin: 0; padding: 0; }
    body { font-family: 'Cairo', sans-serif; background: var(--bg); color: var(--text); direction: rtl; overflow-x: hidden; line-height: 1.6; }
    h1, h2, h3, h4, h5, h6 { font-family: 'Amiri', serif; font-weight: 700; }
    a { text-decoration: none; color: inherit; transition: var(--transition); }
    ul { list-style: none; }

    /* Scrollbar */
    @media (max-width: 1024px) {
      ::-webkit-scrollbar { width: 10px; }
      ::-webkit-scrollbar-track { background: var(--primary-dark); }
      ::-webkit-scrollbar-thumb { background: var(--accent); border-radius: 5px; border: 2px solid var(--primary-dark); }
    }

    @media (min-width: 1025px) {
      ::-webkit-scrollbar { width: 24px; }
      ::-webkit-scrollbar-track { 
        background: linear-gradient(to bottom, #1a0000, #2a0000); 
        border-left: 1px solid rgba(197, 160, 33, 0.1);
        box-shadow: inset 2px 0 8px rgba(0,0,0,0.6);
      }
      ::-webkit-scrollbar-thumb { 
        background: linear-gradient(to right, #8a6d1b, #c5a021 15%, #c5a021 85%, #8a6d1b);
        border: 6px solid #2a0000;
        box-shadow: inset 1px 1px 1px rgba(255,255,255,0.2), inset -1px -1px 1px rgba(0,0,0,0.3);
      }
      ::-webkit-scrollbar-thumb:hover { 
        background: linear-gradient(to right, #a6851d, #d4af37 15%, #d4af37 85%, #a6851d);
      }
    }

    /* Animations */
    @keyframes fadeInDown { from { opacity: 0; transform: translateY(-30px); } to { opacity: 1; transform: translateY(0); } }
    @keyframes fadeInUp { from { opacity: 0; transform: translateY(30px); } to { opacity: 1; transform: translateY(0); } }
    @keyframes fadeIn { from { opacity: 0; } to { opacity: 1; } }
    
    .reveal { opacity: 0; transform: translateY(30px); transition: 0.8s ease-out; }
    .reveal.active { opacity: 1; transform: translateY(0); }

    /* HEADER (FIXED & STABLE) */
    header { background: var(--primary); color: #fff; padding: 0 20px; position: sticky; top: 0; z-index: 1000; border-bottom: 4px solid var(--accent); display: flex; justify-content: space-between; align-items: center; height: var(--nav-height); box-shadow: 0 4px 20px rgba(0,0,0,0.3); }
    
    /* LOGO INTERACTION */
    header .logo { 
      display: flex; 
      align-items: center; 
      gap: 12px; 
      flex-direction: row; 
      cursor: pointer; 
      transition: transform 0.3s cubic-bezier(0.25, 0.8, 0.25, 1); 
      user-select: none;
      text-decoration: none !important;
    }
    header .logo:hover { 
      transform: scale(1.03); 
    }
    header .logo:hover .logo-text, header .logo:hover .logo-sub {
      text-shadow: 0 0 8px rgba(197, 160, 33, 0.3);
    }
    header .logo:active { 
      transform: scale(0.97); 
    }
    header .logo:active .cross-icon {
      transform: rotate(7deg);
    }
    header .logo-text { 
      font-size: 1.35rem; 
      font-weight: 800; 
      line-height: 1.1; 
      color: var(--accent) !important; 
      transition: text-shadow 0.3s ease;
      animation: none !important;
    }
    header .logo-sub { 
      font-size: 0.85rem; 
      font-weight: 700; 
      color: var(--accent) !important; 
      margin-top: 2px;
      display: block;
      transition: text-shadow 0.3s ease;
    }
    header .cross-icon { 
      font-size: 2.2rem; 
      color: var(--accent); 
      filter: drop-shadow(0 0 2px rgba(0,0,0,0.2)); 
      transition: transform 0.3s ease;
      display: flex;
      align-items: center;
      justify-content: center;
    }
    
    /* Global Logo (for Footer) */
    .logo { display: flex; align-items: center; gap: 15px; }
    .logo-text { color: var(--accent) !important; font-weight: 800; }
    .logo-sub { color: var(--accent) !important; }
    .cross-icon { color: var(--accent); }

    nav { display: flex; gap: 25px; }
    nav a { color: #fff; font-weight: 700; font-size: 1rem; position: relative; padding: 5px 0; }
    nav a::after { content: ''; position: absolute; bottom: 0; right: 0; width: 0; height: 2px; background: var(--accent); transition: width 0.3s ease; }
    nav a:hover { color: var(--accent); }
    nav a:hover::after { width: 100%; }
    .hamburger { 
      display: none; 
      font-size: 1.6rem; 
      cursor: pointer; 
      background: rgba(255, 255, 255, 0.05); 
      border: 1px solid rgba(197, 160, 33, 0.3); 
      border-radius: 10px;
      color: var(--accent); 
      z-index: 1002; 
      width: 45px;
      height: 45px;
      align-items: center;
      justify-content: center;
      transition: all 0.3s cubic-bezier(0.4, 0, 0.2, 1);
      outline: none;
      -webkit-tap-highlight-color: transparent;
    }
    .hamburger:hover { background: rgba(197, 160, 33, 0.1); border-color: var(--accent); }
    .hamburger:active { transform: scale(0.92); }

    /* MOBILE MENU (ISOLATED & ROBUST) */
    @media(max-width: 1024px) {
      nav { 
        position: fixed; 
        top: 0; 
        right: 0; 
        width: 85%; 
        height: 100vh; 
        background: var(--primary-dark); 
        flex-direction: column; 
        padding: 80px 20px; 
        transition: transform 0.3s cubic-bezier(0.4, 0, 0.2, 1); 
        z-index: 99999; 
        box-shadow: -5px 0 20px rgba(0,0,0,0.4); 
        justify-content: flex-start; 
        transform: translateX(100%); /* Hidden */
        overflow-y: auto;
      }
      
      nav.active { transform: translateX(0); } /* Visible */
      
      .hamburger { 
        display: flex; 
        position: relative; 
        z-index: 100000; /* Above menu */
      }
      
      nav a { 
        padding: 15px 0; 
        border-bottom: 1px solid rgba(255,255,255,0.05); 
        font-size: 1.1rem; 
        width: 100%; 
        text-align: center; 
        display: block; 
      }
      
      /* NO OVERLAY - NO BLUR */
      .overlay { display: none !important; }
      body.menu-open { overflow: hidden; }
    }

    /* Patronage Section */
    .patronage-section {
      background: #fdfaf5;
      color: var(--primary-dark);
      text-align: center;
      padding: 15px 20px;
      border-bottom: 1px solid rgba(197, 160, 33, 0.2);
      font-family: 'Amiri', serif;
      position: relative;
      z-index: 900;
    }
    .patronage-text {
      font-size: 1.1rem;
      line-height: 1.6;
      margin: 0;
    }
    .patronage-title {
      font-weight: bold;
      color: var(--primary);
      display: block;
      font-size: 1.3rem;
      margin-bottom: 2px;
    }
    .patronage-subtitle {
      color: var(--accent-dark);
      font-size: 1rem;
    }
    .patronage-icon {
      color: var(--accent);
      font-size: 0.9rem;
      margin: 0 8px;
      opacity: 0.8;
    }
    
    /* Hero */
    .hero {
      position: relative;
      background: linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.7)), url('https://upload.wikimedia.org/wikipedia/commons/9/90/Cappella_Palatina_2014.jpg');
      background-size: cover; background-position: center; background-attachment: fixed;
      height: 90vh; display: flex; flex-direction: column; justify-content: center; align-items: center; text-align: center; color: #fff; padding: 20px;
    }
    .hero::before { content: ''; position: absolute; top: 0; left: 0; width: 100%; height: 100%; background: radial-gradient(circle, transparent 20%, #000 150%); pointer-events: none; }
    .hero h1 { font-size: clamp(2.5rem, 6vw, 5rem); color: var(--accent); margin-bottom: 20px; text-shadow: 0 5px 15px rgba(0,0,0,0.8); animation: fadeInUp 1s ease-out; position: relative; z-index: 1; }
    .hero p { font-size: clamp(1.3rem, 3vw, 2.2rem); margin-bottom: 40px; font-family: 'Amiri', serif; animation: fadeInUp 1s ease-out 0.3s backwards; position: relative; z-index: 1; max-width: 800px; }
    .hero-btns { display: flex; gap: 20px; flex-wrap: wrap; justify-content: center; animation: fadeInUp 1s ease-out 0.6s backwards; position: relative; z-index: 1; }
    .btn { padding: 14px 40px; border-radius: 50px; font-weight: 800; transition: var(--transition); border: 2px solid var(--accent); font-size: 1.1rem; cursor: pointer; display: inline-flex; align-items: center; gap: 10px; }
    .btn-primary { background: var(--accent); color: var(--primary-dark); }
    .btn-primary:hover { background: transparent; color: var(--accent); transform: translateY(-3px); box-shadow: 0 5px 15px rgba(197, 160, 33, 0.3); }
    .btn-secondary { background: rgba(0,0,0,0.5); color: #fff; }
    .btn-secondary:hover { background: var(--accent); color: var(--primary-dark); transform: translateY(-3px); }

    /* Daily Verse */
    .daily-verse-section { background: #fdfaf5; padding: 50px 20px; text-align: center; border-bottom: 1px solid #eee; }
    .verse-container { max-width: 800px; margin: 0 auto; border: 2px dashed var(--accent); padding: 30px; border-radius: 20px; background: #fff; box-shadow: 0 10px 30px rgba(0,0,0,0.05); transition: var(--transition); }
    .verse-container:hover { transform: scale(1.02); }
    .verse-title { color: var(--accent-dark); font-size: 1.6rem; margin-bottom: 20px; display: inline-block; border-bottom: 2px solid var(--accent); padding-bottom: 5px; }
    .verse-text { font-size: 2rem; color: var(--primary); font-family: 'Amiri', serif; margin-bottom: 15px; line-height: 1.6; }
    .verse-ref { font-weight: bold; color: #555; font-size: 1.2rem; }

    /* FIX: TICKER POSITION */
    .ticker-wrap { background: var(--primary-dark); color: var(--accent); overflow: hidden; white-space: nowrap; padding: 12px 0; border-bottom: 1px solid var(--accent); box-shadow: 0 2px 10px rgba(0,0,0,0.1); position: relative; z-index: 990; }
    .ticker { display: inline-block; animation: scroll 35s linear infinite; }
    @keyframes scroll { 0% { transform: translateX(100%); } 100% { transform: translateX(-100%); } }
    .ticker span { margin: 0 50px; font-weight: bold; font-size: 1.1rem; display: inline-flex; align-items: center; gap: 10px; }

    /* Section Styling */
    .section-padding { padding: 50px 20px; }
    .section-title { text-align: center; color: var(--primary); font-size: 3rem; margin-bottom: 15px; position: relative; display: inline-block; width: 100%; }
    .section-title::after { content: ''; display: block; width: 100px; height: 4px; background: var(--accent); margin: 15px auto; border-radius: 2px; }
    .section-desc { text-align: center; color: var(--text-light); max-width: 700px; margin: 0 auto 30px; font-size: 1.1rem; }
    .cards-grid { display: grid; grid-template-columns: repeat(auto-fit, minmax(300px, 1fr)); gap: 30px; max-width: 1200px; margin: 0 auto; }

    /* Services & Cards */
    /* Services (Redesigned - Static & Elegant) */
    .service-card { 
      background: #fff; 
      border-radius: 15px; 
      padding: 25px 20px; 
      text-align: center; 
      border: 1px solid #eee; 
      box-shadow: 0 5px 20px rgba(0,0,0,0.03); 
      transition: transform 0.3s ease, box-shadow 0.3s ease, border-color 0.3s ease; 
      height: 100%;
      display: flex;
      flex-direction: column;
      align-items: center;
      justify-content: flex-start;
    }
    
    .service-card:hover { 
      transform: translateY(-7px); 
      box-shadow: 0 15px 30px rgba(0,0,0,0.08); 
      border-color: var(--accent); 
    }
    
    .service-icon-wrapper {
      width: 80px;
      height: 80px;
      background: #fdfaf5;
      border-radius: 50%;
      display: flex;
      align-items: center;
      justify-content: center;
      margin-bottom: 20px;
      border: 2px solid rgba(197, 160, 33, 0.2);
      transition: background 0.3s ease, border-color 0.3s ease;
    }
    
    .service-card:hover .service-icon-wrapper {
      background: var(--accent);
      border-color: var(--accent);
    }
    
    .service-icon { 
      font-size: 2rem; 
      color: var(--primary); 
      transition: color 0.3s ease;
    }
    
    .service-card:hover .service-icon { color: #fff; }
    
    .service-title { 
      font-size: 1.4rem; 
      font-weight: 800; 
      color: var(--primary); 
      margin-bottom: 12px; 
      font-family: 'Amiri', serif;
    }
    
    .service-desc { 
      color: #666; 
      font-size: 1rem; 
      line-height: 1.6; 
      margin: 0;
    }

    /* Schedule Cards (Redesigned) */
    .schedule-card { 
      background: #fff; 
      padding: 20px; 
      border-radius: 15px; 
      text-align: center; 
      border-top: 5px solid var(--accent); 
      box-shadow: 0 5px 20px rgba(0,0,0,0.05); 
      transition: var(--transition); 
      height: 100%;
      display: flex;
      flex-direction: column;
      align-items: center;
    }
    .schedule-card:hover { 
      transform: translateY(-10px); 
      box-shadow: 0 15px 30px rgba(0,0,0,0.1); 
    }
    .schedule-icon { 
      width: 70px;
      height: 70px;
      background: #fdfaf5;
      border-radius: 50%;
      display: flex;
      align-items: center;
      justify-content: center;
      margin-bottom: 20px;
      font-size: 2rem; 
      color: var(--primary); 
      border: 1px solid rgba(197, 160, 33, 0.2);
      transition: 0.3s;
    }
    .schedule-card:hover .schedule-icon {
      background: var(--primary);
      color: #fff;
      border-color: var(--primary);
    }
    .schedule-card h3 { 
      color: var(--primary-dark); 
      margin-bottom: 20px; 
      font-family: 'Amiri', serif; 
      font-size: 1.5rem;
      border-bottom: 2px solid rgba(197, 160, 33, 0.2);
      padding-bottom: 10px;
      width: 100%;
    }
    .schedule-list { 
      list-style: none; 
      padding: 0; 
      margin: 0; 
      text-align: right; 
      width: 100%;
    }
    .schedule-item { 
      margin-bottom: 15px; 
      position: relative; 
      padding-right: 30px; 
      color: #555; 
      font-size: 1.05rem; 
      border-bottom: 1px dashed #eee;
      padding-bottom: 10px;
    }
    .schedule-item:last-child { border-bottom: none; margin-bottom: 0; }
    .schedule-item::before { 
      content: '\f017'; 
      font-family: 'Font Awesome 5 Free'; 
      font-weight: 400; 
      color: var(--accent); 
      position: absolute; 
      right: 0; 
      top: 4px; 
      font-size: 1rem; 
    }
    .schedule-time {
      display: block;
      font-weight: bold;
      color: var(--primary);
      margin-top: 5px;
      font-family: 'Cairo', sans-serif;
    }

    /* Donations (Redesigned - Elegant & Clean) */
    .donations { 
      background: linear-gradient(135deg, #2c0000, #4a0000); 
      color: #fff; 
      text-align: center; 
      position: relative; 
      overflow: hidden; 
      padding: 50px 20px;
    }
    
    .donations::before { 
      content: ''; 
      position: absolute; 
      top: 0; 
      left: 0; 
      width: 100%; 
      height: 100%; 
      background: url('https://www.transparenttextures.com/patterns/cubes.png'); 
      opacity: 0.05; 
      pointer-events: none;
    }
    
    .donations h2 { color: var(--accent); margin-bottom: 10px; }
    .donations .section-desc { color: rgba(255,255,255,0.8); margin-bottom: 30px; }
    
    .don-grid { 
      display: grid; 
      grid-template-columns: repeat(auto-fit, minmax(280px, 1fr)); 
      gap: 30px; 
      max-width: 1200px; 
      margin: 0 auto; 
      position: relative; 
      z-index: 1;
    }
    
    .don-card { 
      background: rgba(255,255,255,0.05); 
      padding: 35px 25px; 
      border-radius: 15px; 
      border: 1px solid rgba(255,255,255,0.1); 
      transition: transform 0.3s ease, background 0.3s ease, border-color 0.3s ease; 
      display: flex;
      flex-direction: column;
      align-items: center;
    }
    
    .don-card:hover { 
      transform: translateY(-7px); 
      background: rgba(255,255,255,0.1); 
      border-color: var(--accent); 
    }
    
    .don-icon-wrapper {
      width: 70px;
      height: 70px;
      background: rgba(197, 160, 33, 0.1);
      border-radius: 50%;
      display: flex;
      align-items: center;
      justify-content: center;
      margin-bottom: 20px;
      border: 1px solid rgba(197, 160, 33, 0.3);
    }
    
    .don-icon { font-size: 1.8rem; color: var(--accent); }
    
    .don-card h3 { margin-bottom: 15px; font-size: 1.3rem; color: #fff; font-family: 'Amiri', serif; }
    
    .don-value { 
      font-family: 'Cairo', sans-serif; 
      font-size: 1.1rem; 
      color: rgba(255,255,255,0.9); 
      margin-bottom: 20px; 
      letter-spacing: 1px;
      background: rgba(0,0,0,0.2);
      padding: 8px 15px;
      border-radius: 8px;
      user-select: all;
    }
    
    .copy-btn { 
      background: transparent; 
      color: var(--accent); 
      border: 1px solid var(--accent); 
      padding: 8px 20px; 
      border-radius: 50px; 
      font-weight: 600; 
      cursor: pointer; 
      transition: all 0.3s ease; 
      display: inline-flex; 
      align-items: center; 
      gap: 8px; 
      font-size: 0.9rem;
    }
    
    .copy-btn:hover { background: var(--accent); color: #2c0000; }
    
    .whatsapp-btn {
      background: #25D366;
      color: #fff;
      border: none;
      padding: 10px 25px;
      border-radius: 50px;
      font-weight: 700;
      text-decoration: none;
      display: inline-flex;
      align-items: center;
      gap: 8px;
      transition: transform 0.3s ease;
    }
    
    .whatsapp-btn:hover { transform: translateY(-3px); background: #1ebe57; color: #fff; }

    /* Priests */
    /* Priests */
    .priests-section { padding: 30px 20px 50px; background: #fff; }
    .priest-card { text-align: center; padding: 30px; background: #fff; border-radius: 20px; box-shadow: 0 5px 20px rgba(0,0,0,0.05); transition: var(--transition); border: 1px solid #eee; }
    .priest-card:hover { transform: translateY(-10px); border-color: var(--accent); box-shadow: 0 10px 25px rgba(0,0,0,0.1); }
    .priest-img { width: 180px; height: 180px; border-radius: 50%; object-fit: cover; margin: 0 auto 20px; border: 4px solid var(--accent); padding: 5px; background: #fff; transition: var(--transition); }
    .priest-card:hover .priest-img { transform: scale(1.05); }
    .priest-name { color: var(--primary); font-size: 1.6rem; margin-bottom: 5px; font-family: 'Amiri', serif; font-weight: bold; }
    .priest-role { color: var(--accent-dark); font-weight: bold; font-size: 0.9rem; font-family: 'Cairo', sans-serif; }

    /* Bishop Section (Sacred & Authoritative) */
    .bishop-section { 
      background: #fff; 
      background-image: url('https://www.transparenttextures.com/patterns/white-diamond.png');
      padding: 60px 20px 30px; 
      text-align: center; 
      position: relative; 
    }
    .bishop-card { 
      background: #fff; 
      padding: 40px 30px; 
      border-radius: 40px; 
      box-shadow: 0 20px 60px rgba(0,0,0,0.08); 
      max-width: 650px; 
      margin: 0 auto; 
      border: 3px solid var(--accent);
      position: relative;
      transition: transform 0.4s cubic-bezier(0.175, 0.885, 0.32, 1.275), box-shadow 0.4s ease;
    }
    .bishop-card:hover {
      transform: translateY(-8px);
      box-shadow: 0 30px 70px rgba(0,0,0,0.12);
    }
    .bishop-card::before {
      content: '';
      position: absolute;
      top: 15px; left: 15px; right: 15px; bottom: 15px;
      border: 1px solid rgba(197, 160, 33, 0.3);
      border-radius: 30px;
      pointer-events: none;
    }
    .bishop-card::after {
      content: '\f654'; 
      font-family: 'Font Awesome 5 Free';
      font-weight: 900;
      position: absolute;
      top: -20px;
      left: 50%;
      transform: translateX(-50%);
      background: #fff;
      padding: 0 20px;
      color: var(--accent);
      font-size: 2rem;
    }
    .bishop-img { 
      width: 260px; 
      height: 260px; 
      border-radius: 50%; 
      object-fit: cover; 
      margin: 0 auto 35px; 
      border: 10px solid var(--accent); 
      padding: 8px; 
      background: #fff; 
      box-shadow: 0 10px 25px rgba(0,0,0,0.2);
      transition: transform 0.5s ease;
    }
    .bishop-card:hover .bishop-img {
      transform: scale(1.02);
    }
    .bishop-name { 
      font-family: 'Amiri', serif; 
      font-size: 2.8rem; 
      color: var(--accent); 
      margin-bottom: 10px; 
      font-weight: bold;
      text-shadow: 1px 1px 2px rgba(0,0,0,0.1);
    }
    .bishop-role { 
      font-family: 'Cairo', sans-serif; 
      font-size: 1.3rem; 
      color: var(--accent-dark); 
      font-weight: 800; 
      text-transform: uppercase;
      letter-spacing: 1px;
    }
    .bishop-blessing {
      font-family: 'Amiri', serif;
      font-size: 1.2rem;
      color: var(--primary);
      margin-top: 20px;
      font-style: italic;
      opacity: 0.85;
      position: relative;
    }
    .bishop-blessing::before, .bishop-blessing::after {
      content: '\271D';
      margin: 0 10px;
      color: var(--accent);
    }

    /* Priests Section (Seamless Connection) */
    .priests-section { 
      padding: 20px 20px 60px; 
      background: #fff; 
      background-image: url('https://www.transparenttextures.com/patterns/white-diamond.png');
    }

    /* Blog Widget */
    .blog-wrapper { background: #f9f9f9; }
    .post-outer { background: #fff; border-radius: 15px; overflow: hidden; box-shadow: 0 5px 15px rgba(0,0,0,0.05); transition: var(--transition); height: 100%; display: flex; flex-direction: column; border-bottom: 4px solid var(--accent); }
    .post-outer:hover { transform: translateY(-5px); box-shadow: 0 15px 30px rgba(0,0,0,0.1); }
    .post-title { padding: 20px 20px 10px; font-size: 1.4rem; }
    .post-title a { color: var(--primary); }
    .post-body { padding: 0 20px 20px; color: var(--text-light); font-size: 0.95rem; flex-grow: 1; }
    .post-meta { padding: 15px 20px; border-top: 1px solid #eee; display: flex; justify-content: space-between; font-size: 0.85rem; color: #888; background: #fcfcfc; }

    /* Donations */
    .donations { background: linear-gradient(135deg, #1a0000, #4a0000); color: #fff; text-align: center; position: relative; overflow: hidden; padding: 50px 20px; }
    .donations::before { content: ''; position: absolute; top: 0; left: 0; width: 100%; height: 100%; background: url('https://www.transparenttextures.com/patterns/cubes.png'); opacity: 0.1; }
    .donations h2 { color: var(--accent); }
    .don-card { background: rgba(255,255,255,0.05); padding: 40px; border-radius: 20px; border: 1px solid rgba(255,255,255,0.1); transition: var(--transition); }
    .don-card:hover { transform: translateY(-10px); background: rgba(255,255,255,0.1); border-color: var(--accent); }
    .don-icon { font-size: 2.5rem; color: var(--accent); margin-bottom: 20px; }
    .don-card h3 { margin-bottom: 15px; font-size: 1.4rem; }
    .don-number { font-family: monospace; font-size: 1.2rem; background: rgba(0,0,0,0.3); padding: 10px; border-radius: 8px; margin-bottom: 20px; display: block; letter-spacing: 1px; }
    .copy-btn { background: var(--accent); color: var(--primary-dark); border: none; padding: 10px 25px; border-radius: 50px; font-weight: 800; cursor: pointer; transition: var(--transition); display: inline-flex; align-items: center; gap: 8px; }
    .copy-btn:hover { background: #fff; color: var(--primary); }

    /* FAQ (STATIC & STABLE) */
    .faq-grid { display: grid; grid-template-columns: repeat(auto-fit, minmax(300px, 1fr)); gap: 25px; max-width: 1200px; margin: 0 auto; }
    
    .faq-card { 
      background: #fff; 
      padding: 30px; 
      border-radius: 15px; 
      border: 1px solid #eee; 
      box-shadow: 0 5px 15px rgba(0,0,0,0.03); 
      transition: transform 0.3s ease, box-shadow 0.3s ease;
      height: 100%;
    }
    
    .faq-card:hover { 
      transform: translateY(-5px); 
      box-shadow: 0 10px 25px rgba(0,0,0,0.08); 
      border-color: var(--accent);
    }
    
    .faq-q { 
      font-size: 1.2rem; 
      font-weight: 800; 
      color: var(--primary); 
      margin-bottom: 15px; 
      display: flex; 
      align-items: center; 
      gap: 10px; 
      line-height: 1.4;
    }
    
    .faq-q i { color: var(--accent); font-size: 1.1rem; }
    
    .faq-a { 
      font-size: 1rem; 
      color: #555; 
      line-height: 1.7; 
      border-top: 1px dashed #eee; 
      padding-top: 15px; 
    }

    /* Contact */
    .contact-grid { display: grid; grid-template-columns: repeat(auto-fit, minmax(300px, 1fr)); gap: 40px; max-width: 1200px; margin: 0 auto; }
    .contact-info { background: #fff; padding: 40px; border-radius: 20px; box-shadow: 0 5px 20px rgba(0,0,0,0.05); }
    .info-item { display: flex; align-items: center; gap: 15px; margin-bottom: 25px; }
    .info-icon { width: 50px; height: 50px; background: var(--primary); color: #fff; border-radius: 50%; display: flex; align-items: center; justify-content: center; font-size: 1.2rem; flex-shrink: 0; }
    .map-container { border-radius: 20px; overflow: hidden; height: 400px; box-shadow: 0 5px 20px rgba(0,0,0,0.05); }

    /* Footer */
    footer { background: #0a0000; color: #fff; padding: 50px 20px 30px; border-top: 5px solid var(--accent); }
    .footer-grid { display: grid; grid-template-columns: repeat(auto-fit, minmax(250px, 1fr)); gap: 40px; max-width: 1200px; margin: 0 auto 50px; }
    .footer-col h3 { color: var(--accent); margin-bottom: 25px; font-size: 1.5rem; position: relative; padding-bottom: 10px; }
    .footer-col h3::after { content: ''; position: absolute; bottom: 0; right: 0; width: 50px; height: 3px; background: var(--primary); }
    .footer-links li { margin-bottom: 12px; }
    .footer-links a { color: #ccc; transition: var(--transition); display: flex; align-items: center; gap: 8px; }
    .footer-links a:hover { color: var(--accent); padding-right: 10px; }
    .social-icons { display: flex; gap: 15px; margin-top: 20px; }
    .social-btn { width: 40px; height: 40px; background: rgba(255,255,255,0.1); border-radius: 50%; display: flex; align-items: center; justify-content: center; transition: var(--transition); }
    .social-btn:hover { background: var(--accent); color: var(--primary-dark); transform: rotate(360deg); }
    .copyright { text-align: center; padding-top: 30px; border-top: 1px solid rgba(255,255,255,0.1); color: #777; font-size: 0.9rem; }

    /* Scroll Top */
    #scrollTop { position: fixed; bottom: 30px; left: 30px; background: var(--accent); color: var(--primary-dark); width: 50px; height: 50px; border-radius: 50%; display: flex; align-items: center; justify-content: center; cursor: pointer; opacity: 0; transition: var(--transition); font-size: 1.2rem; box-shadow: 0 5px 15px rgba(0,0,0,0.3); z-index: 9999; transform: translateY(20px); }
    #scrollTop.show { opacity: 1; transform: translateY(0); }
    #scrollTop:hover { background: #fff; color: var(--primary); }

    /* SMOOTH SCROLL & UX */
    html { scroll-behavior: smooth; scroll-padding-top: var(--nav-height); }
    
    /* BUTTON ANIMATIONS */
    .btn, .copy-btn, button { position: relative; overflow: hidden; transform: scale(1); transition: all 0.3s cubic-bezier(0.25, 0.8, 0.25, 1); }
    .btn:hover, .copy-btn:hover, button:hover { transform: scale(1.03); box-shadow: 0 5px 15px rgba(0,0,0,0.2); }
    .btn:active, .copy-btn:active, button:active { transform: scale(0.95); }
    
    /* RIPPLE EFFECT */
    .ripple { position: absolute; background: rgba(255, 255, 255, 0.3); border-radius: 50%; transform: scale(0); animation: ripple 0.6s linear; pointer-events: none; }
    @keyframes ripple { to { transform: scale(4); opacity: 0; } }

    /* RESPONSIVE TWEAKS */
    @media (max-width: 768px) {
      .hero h1 { font-size: 2.2rem; }
      .section-title { font-size: 2rem; }
      .section-padding { padding: 35px 15px; }
      .cards-grid, .don-grid, .contact-grid { grid-template-columns: 1fr; padding: 0 10px; }
    }

    
    /* TICKER */
    .ticker-wrap { background: var(--primary-dark); border-bottom: 1px solid var(--accent); position: relative; z-index: 999; }

    /* DAILY VERSE */
    .daily-verse-section { background-image: url('https://www.transparenttextures.com/patterns/arabesque.png'); }
    .verse-text { animation: fadeIn 1.5s ease-out; }

    /* ARTICLES */
    .article-card { background: #fff; border-radius: 15px; overflow: hidden; box-shadow: 0 5px 15px rgba(0,0,0,0.05); transition: all 0.4s ease; border-bottom: 4px solid var(--accent); height: 100%; display: flex; flex-direction: column; }
    .article-card:hover { transform: translateY(-10px); box-shadow: 0 15px 30px rgba(0,0,0,0.15); }
    .article-content { padding: 25px; flex-grow: 1; display: flex; flex-direction: column; }
    .article-title { color: var(--primary); font-size: 1.4rem; margin-bottom: 15px; font-weight: bold; }
    .article-text { color: #666; font-size: 0.95rem; line-height: 1.7; margin-bottom: 20px; flex-grow: 1; }
    .read-more { color: var(--accent-dark); font-weight: bold; font-size: 0.9rem; display: inline-flex; align-items: center; gap: 5px; transition: 0.3s; margin-top: auto; }
    .read-more:hover { color: var(--primary); gap: 10px; }

    /* GALLERY PREMIUM */
    .gallery-grid { display: grid; grid-template-columns: repeat(auto-fill, minmax(280px, 1fr)); gap: 20px; }
    .gallery-item { border-radius: 15px; overflow: hidden; position: relative; cursor: pointer; box-shadow: 0 5px 15px rgba(0,0,0,0.1); border: 2px solid transparent; transition: 0.4s; height: 250px; }
    .gallery-item:hover { border-color: var(--accent); transform: scale(1.02); z-index: 2; }
    .gallery-img { width: 100%; height: 100%; object-fit: cover; transition: transform 0.6s; }
    .gallery-item:hover .gallery-img { transform: scale(1.15); }
    .gallery-overlay { background: linear-gradient(to top, rgba(92,0,0,0.9), transparent); opacity: 0; transition: 0.4s; display: flex; flex-direction: column; justify-content: flex-end; padding: 20px; align-items: flex-start; }
    .gallery-item:hover .gallery-overlay { opacity: 1; }
    .gallery-caption { color: #fff; font-weight: bold; font-size: 1.2rem; transform: translateY(20px); transition: 0.4s; }
    .gallery-item:hover .gallery-caption { transform: translateY(0); }

    /* LIGHTBOX */
    .lightbox { position: fixed; top: 0; left: 0; width: 100%; height: 100%; background: rgba(0,0,0,0.95); z-index: 10000; display: flex; justify-content: center; align-items: center; opacity: 0; visibility: hidden; transition: 0.3s; backdrop-filter: blur(5px); }
    .lightbox.active { opacity: 1; visibility: visible; }
    .lightbox-img { max-width: 90%; max-height: 85vh; border-radius: 5px; box-shadow: 0 0 50px rgba(0,0,0,0.5); border: 2px solid var(--accent); transform: scale(0.9); transition: 0.3s; }
    .lightbox.active .lightbox-img { transform: scale(1); }
    .lightbox-close { position: absolute; top: 30px; right: 30px; color: #fff; font-size: 3rem; cursor: pointer; transition: 0.3s; }
    .lightbox-close:hover { color: var(--accent); transform: rotate(90deg); }
    .lightbox-caption { position: absolute; bottom: 30px; color: #fff; font-size: 1.2rem; font-family: 'Amiri', serif; }
  ]]></b:skin>
</head>
<body>
  <div id='scrollProgress' style='position:fixed;top:0;left:0;height:4px;background:var(--accent);width:0%;z-index:10001;transition:width 0.1s;'/>

  <!-- Header -->
  <header>
    <a class='logo' href='#hero' onclick='window.scrollTo({top: 0, behavior: &apos;smooth&apos;}); return false;'>
      <div class='cross-icon'><i class='fas fa-cross'/></div>
      <div>
        <div class='logo-text'>كنيسة العذراء والأنبا صموئيل المعترف</div>
        <div class='logo-sub'>بأبيس الثورة</div>
      </div>
    </a>
    <button class='hamburger'><i class='fas fa-bars'/></button>
    <nav>
      <a href='#hero'>الرئيسية</a>
      <a href='#services'>الخدمات</a>
      <a href='#schedule'>المواعيد</a>
      <a href='#priests'>الآباء</a>
      <a href='#articles'>المقالات</a>
      <a href='#gallery'>المعرض</a>
      <a href='#donations'>التبرعات</a>
      <a href='#contact'>اتصل بنا</a>
    </nav>
  </header>

  <!-- Patronage Section -->
  <div class='patronage-section reveal'>
    <div class='patronage-text'>
      <span class='patronage-title'>تحت رعاية قداسة البابا تواضروس الثاني</span>
      <span class='patronage-subtitle'><i class='fas fa-cross patronage-icon'/> بابا الإسكندرية وبطريرك الكرازة المرقسية <i class='fas fa-cross patronage-icon'/></span>
    </div>
  </div>

  <!-- Hero -->
  <div class='hero' id='hero'>
    <h1>كنيسة العذراء والأنبا صموئيل المعترف</h1>
    <p>&quot;أ&#1614;م&#1617;&#1614;ا أ&#1614;ن&#1614;ا و&#1614;ب&#1614;ي&#1618;ت&#1616;ي ف&#1614;ن&#1614;ع&#1618;ب&#1615;د&#1615; الر&#1617;&#1614;ب&#1617;&#1614;&quot; (يش 24 : 15)</p>
    <div class='hero-btns'>
      <a class='btn btn-primary' href='#schedule'><i class='fas fa-calendar-alt'/> مواعيد القداسات</a>
      <a class='btn btn-secondary' href='#donations'><i class='fas fa-hand-holding-heart'/> المساهمات والتبرع</a>
    </div>
  </div>

  <!-- Ticker (Moved Below Hero) -->
  <div class='ticker-wrap'>
    <div class='ticker'>
      <span><i class='fas fa-star'/> نهضة السيدة العذراء مريم تبدأ 7 أغسطس</span>
      <span><i class='fas fa-church'/> القداسات الإلهية: الجمعة 7-9 ص والأحد 6-8 ص</span>
      <span><i class='fas fa-book-open'/> مدارس الأحد: الجمعة 11 صباحا&#1611;</span>
      <span><i class='fas fa-users'/> اجتماع الشباب: السبت 7 مساء&#1611;</span>
    </div>
  </div>

  <!-- Daily Verse -->
  <div class='daily-verse-section reveal'>
    <div class='verse-container'>
      <h2 class='verse-title'>آية اليوم</h2>
      <p class='verse-text' id='dailyVerse'>...</p>
      <p class='verse-ref' id='dailyRef'>...</p>
    </div>
  </div>



  <!-- Services -->
  <!-- Services (Redesigned) -->
  <div class='section-padding' id='services'>
    <h2 class='section-title'>الخدمات الرعوية</h2>
    <p class='section-desc'>خدمات متنوعة لكل الفئات العمرية بالكنيسة.</p>
    <div class='cards-grid'>
      
      <!-- Service 1 -->
      <div class='service-card reveal'>
        <div class='service-icon-wrapper'>
          <i class='fas fa-child service-icon'/>
        </div>
        <div class='service-title'>مدارس الأحد</div>
        <p class='service-desc'>خدمة تعليمية روحية للأطفال والشباب لغرس القيم والمبادئ المسيحية.</p>
      </div>
      
      <!-- Service 2 -->
      <div class='service-card reveal'>
        <div class='service-icon-wrapper'>
          <i class='fas fa-users service-icon'/>
        </div>
        <div class='service-title'>اجتماع الشباب</div>
        <p class='service-desc'>لقاءات روحية وتثقيفية أسبوعية لمناقشة قضايا الشباب بروح الكنيسة.</p>
      </div>
      
      <!-- Service 3 -->
      <div class='service-card reveal'>
        <div class='service-icon-wrapper'>
          <i class='fas fa-hand-holding-heart service-icon'/>
        </div>
        <div class='service-title'>خدمة الافتقاد</div>
        <p class='service-desc'>رعاية ومتابعة الأسر وكبار السن والمرضى لتقديم الدعم الروحي والنفسي.</p>
      </div>
      
      <!-- Service 4 -->
      <div class='service-card reveal'>
        <div class='service-icon-wrapper'>
          <i class='fas fa-music service-icon'/>
        </div>
        <div class='service-title'>خدمة الألحان</div>
        <p class='service-desc'>مدرسة لتعليم الألحان القبطية والترانيم الكنسية والتسبحة للحفاظ على التراث.</p>
      </div>
      
      <!-- Service 5 -->
      <div class='service-card reveal'>
        <div class='service-icon-wrapper'>
          <i class='fas fa-campground service-icon'/>
        </div>
        <div class='service-title'>الكشافة الكنسية</div>
        <p class='service-desc'>تنمية المهارات والروح القيادية والأخلاقية من خلال أنشطة ومعسكرات منظمة.</p>
      </div>
      
      <!-- Service 6 -->
      <div class='service-card reveal'>
        <div class='service-icon-wrapper'>
          <i class='fas fa-home service-icon'/>
        </div>
        <div class='service-title'>المشورة الأسرية</div>
        <p class='service-desc'>دعم وإرشاد للمقبلين على الزواج والأسر لحل المشكلات بروح المحبة والحكمة.</p>
      </div>
      
    </div>
  </div>

  <!-- Mass & Activities Schedule (Redesigned) -->
  <div class='section-padding' id='schedule' style='background:#f4f4f4;'>
    <h2 class='section-title'>مواعيد الكنيسة</h2>
    <p class='section-desc'>جدول القداسات والاجتماعات الأسبوعية.</p>
    <div class='cards-grid'>
      
      <!-- Mass Schedule -->
      <div class='schedule-card reveal'>
        <div class='schedule-icon'><i class='fas fa-church'/></div>
        <h3>القداسات الإلهية</h3>
        <div class='schedule-list'>
          <div class='schedule-item'>
            قداس الجمعة
            <span class='schedule-time'>من 7:00 ص إلى 9:00 ص</span>
          </div>
          <div class='schedule-item'>
            قداس الأحد
            <span class='schedule-time'>من 6:00 ص إلى 8:00 ص</span>
          </div>
          <div class='schedule-item'>
            الأعياد والمناسبات
            <span class='schedule-time'>حسب الترتيب الطقسي</span>
          </div>
        </div>
      </div>
      
      <!-- Meetings Schedule -->
      <div class='schedule-card reveal'>
        <div class='schedule-icon'><i class='fas fa-users'/></div>
        <h3>الاجتماعات الروحية</h3>
        <div class='schedule-list'>
          <div class='schedule-item'>
            اجتماع الشباب
            <span class='schedule-time'>السبت 7:00 م</span>
          </div>
          <div class='schedule-item'>
            اجتماع السيدات
            <span class='schedule-time'>الخميس 5:00 م</span>
          </div>
          <div class='schedule-item'>
            عشية وصلاة
            <span class='schedule-time'>الأربعاء 6:00 م</span>
          </div>
        </div>
      </div>
      
      <!-- Sunday School Schedule -->
      <div class='schedule-card reveal'>
        <div class='schedule-icon'><i class='fas fa-child'/></div>
        <h3>مدارس الأحد</h3>
        <div class='schedule-list'>
          <div class='schedule-item'>
            المرحلة الابتدائية
            <span class='schedule-time'>الجمعة 11:00 ص</span>
          </div>
          <div class='schedule-item'>
            المرحلة الإعدادية
            <span class='schedule-time'>الجمعة 11:00 ص</span>
          </div>
          <div class='schedule-item'>
            المرحلة الثانوية
            <span class='schedule-time'>الجمعة 12:00 م</span>
          </div>
        </div>
      </div>
      
    </div>
  </div>

  <!-- Bishop Section (Church Shepherd) -->
  <div class='bishop-section' id='bishop'>
    <h2 class='section-title'>راعي الكنيسة</h2>
    <div class='bishop-card reveal'>
      <img alt='نيافة الأنبا بافلي' class='bishop-img' src='https://i.postimg.cc/tCV0vrjw/Picsart-26-01-03-02-50-38-913.jpg'/>
      <h3 class='bishop-name'>نيافة الأنبا بافلي</h3>
      <p class='bishop-role'>راعي الكنيسة &#8211; أسقف قبطي أرثوذكسي</p>
      <p class='bishop-blessing'>أسقف الكنيسة ورعايتها الروحية</p>
    </div>
  </div>

  <!-- Fathers (Priests) -->
  <div class='priests-section' id='priests'>
    <h2 class='section-title'>آباء الكنيسة</h2>
    <p class='section-desc'>رعاة الكنيسة الساهرين على خدمة النفوس.</p>
    <div class='cards-grid' style='justify-content: center; max-width: 800px;'>
      <div class='priest-card reveal'>
        <img alt='Fr. Pavly' class='priest-img' src='https://i.postimg.cc/hPNRHnJ9/Picsart-26-01-02-14-27-17-001.jpg'/>
        <h3 class='priest-name'>القس / بافلي</h3>
        <p class='priest-role'>كاهن الكنيسة</p>
      </div>
      <div class='priest-card reveal'>
        <img alt='Fr. Sourial' class='priest-img' src='https://i.postimg.cc/1zwmWtJH/Picsart-26-01-02-14-20-57-432.jpg'/>
        <h3 class='priest-name'>القس / سوريال</h3>
        <p class='priest-role'>كاهن الكنيسة</p>
      </div>
    </div>
  </div>

  <!-- Articles Widget -->
  <b:section class='main' id='main' showaddelement='yes'>
    <b:widget id='Blog1' locked='false' title='Blog Posts' type='Blog' version='1'>
      <b:widget-settings>
        <b:widget-setting name='showDateHeader'>true</b:widget-setting>
        <b:widget-setting name='style.textcolor'>#ffffff</b:widget-setting>
        <b:widget-setting name='showShareButtons'>false</b:widget-setting>
        <b:widget-setting name='showCommentLink'>true</b:widget-setting>
        <b:widget-setting name='style.urlcolor'>#ffffff</b:widget-setting>
        <b:widget-setting name='showAuthor'>true</b:widget-setting>
        <b:widget-setting name='style.linkcolor'>#ffffff</b:widget-setting>
        <b:widget-setting name='style.unittype'>TextAndImage</b:widget-setting>
        <b:widget-setting name='style.bgcolor'>#ffffff</b:widget-setting>
        <b:widget-setting name='reactionsLabel'/>
        <b:widget-setting name='showAuthorProfile'>false</b:widget-setting>
        <b:widget-setting name='style.layout'>1x1</b:widget-setting>
        <b:widget-setting name='showLabels'>true</b:widget-setting>
        <b:widget-setting name='showLocation'>true</b:widget-setting>
        <b:widget-setting name='showTimestamp'>true</b:widget-setting>
        <b:widget-setting name='postsPerAd'>1</b:widget-setting>
        <b:widget-setting name='showBacklinks'>false</b:widget-setting>
        <b:widget-setting name='style.bordercolor'>#ffffff</b:widget-setting>
        <b:widget-setting name='showInlineAds'>false</b:widget-setting>
        <b:widget-setting name='showReactions'>false</b:widget-setting>
      </b:widget-settings>
      <b:includable id='main'>
        <div class='section-padding blog-wrapper' id='articles'>
          <h2 class='section-title'>مقالات روحية</h2>
          <p class='section-desc'>كلمات منفعة وتأملات من الآباء.</p>
          <div class='cards-grid'>
            <!-- Static Articles for Template Demo -->
            <div class='article-card reveal'>
              <div class='article-content'>
                <div class='article-title'>الصلاة قوة حياة</div>
                <div class='article-text'>الصلاة هي علاقة حية بين الإنسان والله&#1548; بها نفتح قلوبنا ونسكب أمامه كل ما في داخلنا. بالصلاة ننال سلام&#1611;ا يفوق كل عقل&#1548; ونشعر بحضور الله الحقيقي في حياتنا اليومية.</div>
                <a class='read-more' href='#'>اقرأ المزيد <i class='fas fa-arrow-left'/></a>
              </div>
            </div>
            <div class='article-card reveal'>
              <div class='article-content'>
                <div class='article-title'>التوبة بداية الطريق</div>
                <div class='article-text'>التوبة ليست مجرد شعور بالندم&#1548; بل هي رجوع صادق إلى الله&#1548; وقرار حقيقي لتغيير الفكر والسلوك. بها تتجدد النفس وتنفتح أبواب السماء أمام التائبين.</div>
                <a class='read-more' href='#'>اقرأ المزيد <i class='fas fa-arrow-left'/></a>
              </div>
            </div>
            <div class='article-card reveal'>
              <div class='article-content'>
                <div class='article-title'>قوة كلمة الله</div>
                <div class='article-text'>كلمة الله حية وفعالة&#1548; تنير الطريق وت&#1615;رشد الخطوات. بالمواظبة على قراءة الكتاب المقدس&#1548; يتجدد الذهن ويتقو&#1617;ى الإيمان&#1548; ونكتشف مشيئة الله الصالحة لحياتنا.</div>
                <a class='read-more' href='#'>اقرأ المزيد <i class='fas fa-arrow-left'/></a>
              </div>
            </div>
            <div class='article-card reveal'>
              <div class='article-content'>
                <div class='article-title'>المحبة أساس الحياة</div>
                <div class='article-text'>المحبة هي الوصية العظمى&#1548; بها ن&#1615;ظهر المسيح للعالم. المحبة تحتمل&#1548; تصدق&#1548; وتغفر&#1548; وهي الطريق الحقيقي للسلام وبناء مجتمع كنسي مترابط وقوي.</div>
                <a class='read-more' href='#'>اقرأ المزيد <i class='fas fa-arrow-left'/></a>
              </div>
            </div>
          </div>
        </div>
      </b:includable>
      <b:includable id='backlinkDeleteIcon' var='backlink'/>
      <b:includable id='backlinks' var='post'/>
      <b:includable id='comment-form' var='post'>
  <div class='comment-form'>
    <a name='comment-form'/>
    <b:if cond='data:mobile'>
      <h4 id='comment-post-message'>
        <a expr:id='data:widget.instanceId + &quot;_comment-editor-toggle-link&quot;' href='javascript:void(0)'><data:postCommentMsg/></a></h4>
      <p><data:blogCommentMessage/></p>
      <data:blogTeamBlogMessage/>
      <a expr:href='data:post.commentFormIframeSrc' id='comment-editor-src'/>
      <iframe allowtransparency='true' class='blogger-iframe-colorize blogger-comment-from-post' expr:height='data:cmtIframeInitialHeight' frameborder='0' id='comment-editor' name='comment-editor' src='' style='display: none' width='100%'/>
    <b:else/>
      <h4 id='comment-post-message'><data:postCommentMsg/></h4>
      <p><data:blogCommentMessage/></p>
      <data:blogTeamBlogMessage/>
      <a expr:href='data:post.commentFormIframeSrc' id='comment-editor-src'/>
      <iframe allowtransparency='true' class='blogger-iframe-colorize blogger-comment-from-post' expr:height='data:cmtIframeInitialHeight' frameborder='0' id='comment-editor' name='comment-editor' src='' width='100%'/>
    </b:if>
    <data:post.cmtfpIframe/>
    <script type='text/javascript'>
      BLOG_CMT_createIframe(&#39;<data:post.appRpcRelayPath/>&#39;);
    </script>
  </div>
</b:includable>
      <b:includable id='commentDeleteIcon' var='comment'>
  <span expr:class='&quot;item-control &quot; + data:comment.adminClass'>
    <b:if cond='data:showCmtPopup'>
      <div class='goog-toggle-button'>
        <div class='goog-inline-block comment-action-icon'/>
      </div>
    <b:else/>
      <a class='comment-delete' expr:href='data:comment.deleteUrl' expr:title='data:top.deleteCommentMsg'>
        <img src='https://resources.blogblog.com/img/icon_delete13.gif'/>
      </a>
    </b:if>
  </span>
</b:includable>
      <b:includable id='comment_count_picker' var='post'>
  <a class='comment-link' expr:href='data:post.addCommentUrl' expr:onclick='data:post.addCommentOnclick'>
    <data:post.commentLabelFull/>:
  </a>
</b:includable>
      <b:includable id='comment_picker' var='post'>
  <b:if cond='data:post.showThreadedComments'>
    <b:include data='post' name='threaded_comments'/>
  <b:else/>
    <b:include data='post' name='comments'/>
  </b:if>
</b:includable>
      <b:includable id='comments' var='post'>
  <div class='comments' id='comments'>
    <a name='comments'/>
    <b:if cond='data:post.allowComments'>
      <h4><data:post.commentLabelFull/>:</h4>

      <b:if cond='data:post.commentPagingRequired'>
        <span class='paging-control-container'>
          <b:if cond='data:post.hasOlderLinks'>
            <a expr:class='data:post.oldLinkClass' expr:href='data:post.oldestLinkUrl'><data:post.oldestLinkText/></a>
              &#160;
            <a expr:class='data:post.oldLinkClass' expr:href='data:post.olderLinkUrl'><data:post.olderLinkText/></a>
              &#160;
          </b:if>

          <data:post.commentRangeText/>

          <b:if cond='data:post.hasNewerLinks'>
            &#160;
            <a expr:class='data:post.newLinkClass' expr:href='data:post.newerLinkUrl'><data:post.newerLinkText/></a>
            &#160;
            <a expr:class='data:post.newLinkClass' expr:href='data:post.newestLinkUrl'><data:post.newestLinkText/></a>
          </b:if>
        </span>
      </b:if>

      <div expr:id='data:widget.instanceId + &quot;_comments-block-wrapper&quot;'>
        <dl expr:class='data:post.avatarIndentClass' id='comments-block'>
          <b:loop values='data:post.comments' var='comment'>
            <dt expr:class='&quot;comment-author &quot; + data:comment.authorClass' expr:id='data:comment.anchorName'>
              <b:if cond='data:comment.favicon'>
                <img expr:src='data:comment.favicon' height='16px' style='margin-bottom:-2px;' width='16px'/>
              </b:if>
              <a expr:name='data:comment.anchorName'/>
              <b:if cond='data:blog.enabledCommentProfileImages'>
                <data:comment.authorAvatarImage/>
              </b:if>
              <b:if cond='data:comment.authorUrl'>
                <a expr:href='data:comment.authorUrl' rel='nofollow'><data:comment.author/></a>
              <b:else/>
                <data:comment.author/>
              </b:if>
              <data:commentPostedByMsg/>
            </dt>
            <dd class='comment-body' expr:id='data:widget.instanceId + data:comment.cmtBodyIdPostfix'>
              <b:if cond='data:comment.isDeleted'>
                <span class='deleted-comment'><data:comment.body/></span>
              <b:else/>
                <p>
                  <data:comment.body/>
                </p>
              </b:if>
            </dd>
            <dd class='comment-footer'>
              <span class='comment-timestamp'>
                <a expr:href='data:comment.url' title='comment permalink'>
                  <data:comment.timestamp/>
                </a>
                <b:include data='comment' name='commentDeleteIcon'/>
              </span>
            </dd>
          </b:loop>
        </dl>
      </div>

      <b:if cond='data:post.commentPagingRequired'>
        <span class='paging-control-container'>
          <a expr:class='data:post.oldLinkClass' expr:href='data:post.oldestLinkUrl'>
            <data:post.oldestLinkText/>
          </a>
          <a expr:class='data:post.oldLinkClass' expr:href='data:post.olderLinkUrl'>
            <data:post.olderLinkText/>
          </a>
          &#160;
          <data:post.commentRangeText/>
          &#160;
          <a expr:class='data:post.newLinkClass' expr:href='data:post.newerLinkUrl'>
            <data:post.newerLinkText/>
          </a>
          <a expr:class='data:post.newLinkClass' expr:href='data:post.newestLinkUrl'>
            <data:post.newestLinkText/>
          </a>
        </span>
      </b:if>

      <p class='comment-footer'>
        <b:if cond='data:post.embedCommentForm'>
          <b:if cond='data:post.allowNewComments'>
            <b:include data='post' name='comment-form'/>
          <b:else/>
            <data:post.noNewCommentsText/>
          </b:if>
        <b:elseif cond='data:post.allowComments'/>
          <a expr:href='data:post.addCommentUrl' expr:onclick='data:post.addCommentOnclick'><data:postCommentMsg/></a>
        </b:if>
      </p>
    </b:if>
    <b:if cond='data:showCmtPopup'>
      <div id='comment-popup'>
        <iframe allowtransparency='true' frameborder='0' id='comment-actions' name='comment-actions' scrolling='no'>
        </iframe>
      </div>
    </b:if>

  </div>
</b:includable>
      <b:includable id='feedLinks'>
  <b:if cond='data:blog.pageType != &quot;item&quot;'> <!-- Blog feed links -->
    <b:if cond='data:feedLinks'>
      <div class='blog-feeds'>
        <b:include data='feedLinks' name='feedLinksBody'/>
      </div>
    </b:if>

  <b:else/> <!--Post feed links -->
    <div class='post-feeds'>
      <b:loop values='data:posts' var='post'>
        <b:include cond='data:post.allowComments and data:post.feedLinks' data='post.feedLinks' name='feedLinksBody'/>
      </b:loop>
    </div>
  </b:if>
</b:includable>
      <b:includable id='feedLinksBody' var='links'>
  <div class='feed-links'>
  <data:feedLinksMsg/>
  <b:loop values='data:links' var='f'>
     <a class='feed-link' expr:href='data:f.url' expr:type='data:f.mimeType' target='_blank'><data:f.name/> (<data:f.feedType/>)</a>
  </b:loop>
  </div>
</b:includable>
      <b:includable id='iframe_comments' var='post'>
  <!-- G+ comments, no longer available. The includable is retained for backwards-compatibility. -->
</b:includable>
      <b:includable id='mobile-index-post' var='post'>
  <div class='mobile-date-outer date-outer'>
    <b:if cond='data:post.dateHeader'>
      <div class='date-header'>
        <span><data:post.dateHeader/></span>
      </div>
    </b:if>

    <div class='mobile-post-outer'>
      <a expr:href='data:post.url'>
        <h3 class='mobile-index-title entry-title' itemprop='name'>
          <data:post.title/>
        </h3>

        <div class='mobile-index-arrow'>&amp;rsaquo;</div>

        <div class='mobile-index-contents'>
          <b:if cond='data:post.thumbnailUrl'>
            <div class='mobile-index-thumbnail'>
              <div class='Image'>
                <img expr:src='data:post.thumbnailUrl'/>
              </div>
            </div>
          </b:if>

          <div class='post-body'>
            <b:if cond='data:post.snippet'><data:post.snippet/></b:if>
          </div>
        </div>

        <div style='clear: both;'/>
      </a>

      <div class='mobile-index-comment'>
        <b:include cond='data:blog.pageType != &quot;static_page&quot;                          and data:post.allowComments                          and data:post.numComments != 0' data='post' name='comment_count_picker'/>
      </div>
    </div>
  </div>
</b:includable>
      <b:includable id='mobile-main' var='top'>
    <!-- posts -->
    <div class='blog-posts hfeed'>

      <b:include data='top' name='status-message'/>

      <b:if cond='data:blog.pageType == &quot;index&quot;'>
        <b:loop values='data:posts' var='post'>
          <b:include data='post' name='mobile-index-post'/>
        </b:loop>
      <b:else/>
        <b:loop values='data:posts' var='post'>
          <b:include data='post' name='mobile-post'/>
        </b:loop>
      </b:if>
    </div>

   <b:include name='mobile-nextprev'/>
</b:includable>
      <b:includable id='mobile-nextprev'>
  <div class='blog-pager' id='blog-pager'>
    <b:if cond='data:newerPageUrl'>
      <div class='mobile-link-button' id='blog-pager-newer-link'>
      <a class='blog-pager-newer-link' expr:href='data:newerPageUrl' expr:id='data:widget.instanceId + &quot;_blog-pager-newer-link&quot;' expr:title='data:newerPageTitle'>&amp;lsaquo;</a>
      </div>
    </b:if>

    <b:if cond='data:olderPageUrl'>
      <div class='mobile-link-button' id='blog-pager-older-link'>
      <a class='blog-pager-older-link' expr:href='data:olderPageUrl' expr:id='data:widget.instanceId + &quot;_blog-pager-older-link&quot;' expr:title='data:olderPageTitle'>&amp;rsaquo;</a>
      </div>
    </b:if>

    <div class='mobile-link-button' id='blog-pager-home-link'>
    <a class='home-link' expr:href='data:blog.homepageUrl'><data:homeMsg/></a>
    </div>

    <div class='mobile-desktop-link'>
      <a class='home-link' expr:href='data:desktopLinkUrl'><data:desktopLinkMsg/></a>
    </div>

  </div>
  <div class='clear'/>
</b:includable>
      <b:includable id='mobile-post' var='post'>
  <div class='date-outer'>
    <b:if cond='data:post.dateHeader'>
      <h2 class='date-header'><span><data:post.dateHeader/></span></h2>
    </b:if>
    <div class='date-posts'>
      <div class='post-outer'>

        <div class='post hentry uncustomized-post-template' itemscope='itemscope' itemtype='http://schema.org/BlogPosting'>
          <b:if cond='data:post.thumbnailUrl'>
            <meta expr:content='data:post.thumbnailUrl' itemprop='image_url'/>
          </b:if>
          <meta expr:content='data:blog.blogId' itemprop='blogId'/>
          <meta expr:content='data:post.id' itemprop='postId'/>

          <a expr:name='data:post.id'/>
          <b:if cond='data:post.title'>
            <h3 class='post-title entry-title' itemprop='name'>
              <b:if cond='data:post.link'>
                <a expr:href='data:post.link'><data:post.title/></a>
              <b:elseif cond='data:post.url and data:blog.url != data:post.url'/>
                <a expr:href='data:post.url'><data:post.title/></a>
              <b:else/>
                <data:post.title/>
              </b:if>
            </h3>
          </b:if>

          <div class='post-header'>
            <div class='post-header-line-1'/>
          </div>

          <div class='post-body entry-content' expr:id='&quot;post-body-&quot; + data:post.id' itemprop='articleBody'>
            <data:post.body/>
            <div style='clear: both;'/> <!-- clear for photos floats -->
          </div>

          <div class='post-footer'>
            <div class='post-footer-line post-footer-line-1'>
              <span class='post-author vcard'>
                <b:if cond='data:top.showAuthor'>
                  <b:if cond='data:post.authorProfileUrl'>
                    <span class='fn' itemprop='author' itemscope='itemscope' itemtype='http://schema.org/Person'>
                      <meta expr:content='data:post.authorProfileUrl' itemprop='url'/>
                      <a expr:href='data:post.authorProfileUrl' rel='author' title='author profile'>
                        <span itemprop='name'><data:post.author/></span>
                      </a>
                    </span>
                  <b:else/>
                    <span class='fn' itemprop='author' itemscope='itemscope' itemtype='http://schema.org/Person'>
                      <span itemprop='name'><data:post.author/></span>
                    </span>
                  </b:if>
                </b:if>
              </span>

              <span class='post-timestamp'>
                <b:if cond='data:top.showTimestamp'>
                  <data:top.timestampLabel/>
                  <b:if cond='data:post.url'>
                    <meta expr:content='data:post.url.canonical' itemprop='url'/>
                    <a class='timestamp-link' expr:href='data:post.url' rel='bookmark' title='permanent link'><abbr class='published' expr:title='data:post.timestampISO8601' itemprop='datePublished'><data:post.timestamp/></abbr></a>
                  </b:if>
                </b:if>
              </span>

              <span class='post-comment-link'>
                <b:include cond='data:blog.pageType not in {&quot;item&quot;,&quot;static_page&quot;}                                  and data:post.allowComments' data='post' name='comment_count_picker'/>
              </span>
            </div>

            <div class='post-footer-line post-footer-line-2'>
              <b:if cond='data:top.showMobileShare'>
                <div class='mobile-link-button goog-inline-block' id='mobile-share-button'>
                  <a href='javascript:void(0);'><data:shareMsg/></a>
                </div>
              </b:if>
            </div>

          </div>
        </div>

        <b:include cond='data:blog.pageType in {&quot;static_page&quot;,&quot;item&quot;}' data='post' name='comment_picker'/>
      </div>
    </div>
  </div>
</b:includable>
      <b:includable id='nextprev'>
  <div class='blog-pager' id='blog-pager'>
    <b:if cond='data:newerPageUrl'>
      <span id='blog-pager-newer-link'>
      <a class='blog-pager-newer-link' expr:href='data:newerPageUrl' expr:id='data:widget.instanceId + &quot;_blog-pager-newer-link&quot;' expr:title='data:newerPageTitle'><data:newerPageTitle/></a>
      </span>
    </b:if>

    <b:if cond='data:olderPageUrl'>
      <span id='blog-pager-older-link'>
      <a class='blog-pager-older-link' expr:href='data:olderPageUrl' expr:id='data:widget.instanceId + &quot;_blog-pager-older-link&quot;' expr:title='data:olderPageTitle'><data:olderPageTitle/></a>
      </span>
    </b:if>

    <a class='home-link' expr:href='data:blog.homepageUrl'><data:homeMsg/></a>

    <b:if cond='data:mobileLinkUrl'>
      <div class='blog-mobile-link'>
        <a expr:href='data:mobileLinkUrl'><data:mobileLinkMsg/></a>
      </div>
    </b:if>

  </div>
  <div class='clear'/>
</b:includable>
      <b:includable id='post' var='post'>
  <div class='post hentry uncustomized-post-template' itemprop='blogPost' itemscope='itemscope' itemtype='http://schema.org/BlogPosting'>
    <b:if cond='data:post.firstImageUrl'>
      <meta expr:content='data:post.firstImageUrl' itemprop='image_url'/>
    </b:if>
    <meta expr:content='data:blog.blogId' itemprop='blogId'/>
    <meta expr:content='data:post.id' itemprop='postId'/>

    <a expr:name='data:post.id'/>
    <b:if cond='data:post.title'>
      <h3 class='post-title entry-title' itemprop='name'>
      <b:if cond='data:post.link or (data:post.url and data:blog.url != data:post.url)'>
        <a expr:href='data:post.link ? data:post.link : data:post.url'><data:post.title/></a>
      <b:else/>
        <data:post.title/>
      </b:if>
      </h3>
    </b:if>

    <div class='post-header'>
    <div class='post-header-line-1'/>
    </div>

    <!-- Then use the post body as the schema.org description, for good G+/FB snippeting. -->
    <div class='post-body entry-content' expr:id='&quot;post-body-&quot; + data:post.id' expr:itemprop='(data:blog.metaDescription ? &quot;&quot; : &quot;description &quot;) + &quot;articleBody&quot;'>
      <data:post.body/>
      <div style='clear: both;'/> <!-- clear for photos floats -->
    </div>

    <b:if cond='data:post.hasJumpLink'>
      <div class='jump-link'>
        <a expr:href='data:post.url + &quot;#more&quot;' expr:title='data:post.title'><data:post.jumpText/></a>
      </div>
    </b:if>

    <div class='post-footer'>
    <div class='post-footer-line post-footer-line-1'>
      <span class='post-author vcard'>
        <b:if cond='data:top.showAuthor'>
          <data:top.authorLabel/>
            <b:if cond='data:post.authorProfileUrl'>
              <span class='fn' itemprop='author' itemscope='itemscope' itemtype='http://schema.org/Person'>
                <meta expr:content='data:post.authorProfileUrl' itemprop='url'/>
                <a class='g-profile' expr:href='data:post.authorProfileUrl' rel='author' title='author profile'>
                  <span itemprop='name'><data:post.author/></span>
                </a>
              </span>
            <b:else/>
              <span class='fn' itemprop='author' itemscope='itemscope' itemtype='http://schema.org/Person'>
                <span itemprop='name'><data:post.author/></span>
              </span>
            </b:if>
        </b:if>
      </span>

      <span class='post-timestamp'>
        <b:if cond='data:top.showTimestamp'>
          <data:top.timestampLabel/>
          <b:if cond='data:post.url'>
            <meta expr:content='data:post.url.canonical' itemprop='url'/>
            <a class='timestamp-link' expr:href='data:post.url' rel='bookmark' title='permanent link'><abbr class='published' expr:title='data:post.timestampISO8601' itemprop='datePublished'><data:post.timestamp/></abbr></a>
          </b:if>
        </b:if>
      </span>

      <span class='post-comment-link'>
        <b:include cond='data:blog.pageType not in {&quot;item&quot;,&quot;static_page&quot;}                          and data:post.allowComments' data='post' name='comment_count_picker'/>
      </span>

      <span class='post-icons'>
        <!-- email post links -->
        <b:if cond='data:post.emailPostUrl'>
          <span class='item-action'>
          <a expr:href='data:post.emailPostUrl' expr:title='data:top.emailPostMsg'>
            <img alt='' class='icon-action' height='13' src='https://resources.blogblog.com/img/icon18_email.gif' width='18'/>
          </a>
          </span>
        </b:if>

        <!-- quickedit pencil -->
        <b:include data='post' name='postQuickEdit'/>
      </span>

      <!-- share buttons -->
      <div class='post-share-buttons goog-inline-block'>
        <b:include cond='data:post.sharePostUrl' data='post' name='shareButtons'/>
      </div>

      </div>

      <div class='post-footer-line post-footer-line-2'>
      <span class='post-labels'>
        <b:if cond='data:top.showPostLabels and data:post.labels'>
          <data:postLabelsLabel/>
          <b:loop values='data:post.labels' var='label'>
            <a expr:href='data:label.url' rel='tag'><data:label.name/></a><b:if cond='not data:label.isLast'>,</b:if>
          </b:loop>
        </b:if>
      </span>
      </div>

      <div class='post-footer-line post-footer-line-3'>
      <span class='post-location'>
        <b:if cond='data:top.showLocation and data:post.location'>
          <data:postLocationLabel/>
          <a expr:href='data:post.location.mapsUrl' target='_blank'><data:post.location.name/></a>
        </b:if>
      </span>
      </div>
      <b:if cond='data:post.authorAboutMe'>
        <div class='author-profile' itemprop='author' itemscope='itemscope' itemtype='http://schema.org/Person'>
          <b:if cond='data:post.authorPhoto.url'>
            <img expr:src='data:post.authorPhoto.url' itemprop='image' width='50px'/>
          </b:if>
          <div>
            <a class='g-profile' expr:href='data:post.authorProfileUrl' itemprop='url' rel='author' title='author profile'>
              <span itemprop='name'><data:post.author/></span>
            </a>
          </div>
          <span itemprop='description'><data:post.authorAboutMe/></span>
        </div>
      </b:if>
    </div>
  </div>
</b:includable>
      <b:includable id='postQuickEdit' var='post'>
  <b:if cond='data:post.editUrl'>
    <span expr:class='&quot;item-control &quot; + data:post.adminClass'>
      <a expr:href='data:post.editUrl' expr:title='data:top.editPostMsg'>
        <img alt='' class='icon-action' height='18' src='https://resources.blogblog.com/img/icon18_edit_allbkg.gif' width='18'/>
      </a>
    </span>
  </b:if>
</b:includable>
      <b:includable id='shareButtons' var='post'>
  <b:if cond='data:top.showEmailButton'><a class='goog-inline-block share-button sb-email' expr:href='data:post.sharePostUrl + &quot;&amp;target=email&quot;' expr:title='data:top.emailThisMsg' target='_blank'><span class='share-button-link-text'><data:top.emailThisMsg/></span></a></b:if><b:if cond='data:top.showBlogThisButton'><a class='goog-inline-block share-button sb-blog' expr:href='data:post.sharePostUrl + &quot;&amp;target=blog&quot;' expr:onclick='&quot;window.open(this.href, \&quot;_blank\&quot;, \&quot;height=270,width=475\&quot;); return false;&quot;' expr:title='data:top.blogThisMsg' target='_blank'><span class='share-button-link-text'><data:top.blogThisMsg/></span></a></b:if><b:if cond='data:top.showTwitterButton'><a class='goog-inline-block share-button sb-twitter' expr:href='data:post.sharePostUrl + &quot;&amp;target=twitter&quot;' expr:title='data:top.shareToTwitterMsg' target='_blank'><span class='share-button-link-text'><data:top.shareToTwitterMsg/></span></a></b:if><b:if cond='data:top.showFacebookButton'><a class='goog-inline-block share-button sb-facebook' expr:href='data:post.sharePostUrl + &quot;&amp;target=facebook&quot;' expr:onclick='&quot;window.open(this.href, \&quot;_blank\&quot;, \&quot;height=430,width=640\&quot;); return false;&quot;' expr:title='data:top.shareToFacebookMsg' target='_blank'><span class='share-button-link-text'><data:top.shareToFacebookMsg/></span></a></b:if><b:if cond='data:top.showPinterestButton'><a class='goog-inline-block share-button sb-pinterest' expr:href='data:post.sharePostUrl + &quot;&amp;target=pinterest&quot;' expr:title='data:top.shareToPinterestMsg' target='_blank'><span class='share-button-link-text'><data:top.shareToPinterestMsg/></span></a></b:if>
</b:includable>
      <b:includable id='status-message'>
  <b:if cond='data:navMessage'>
  <div class='status-msg-wrap'>
    <div class='status-msg-body'>
      <data:navMessage/>
    </div>
    <div class='status-msg-border'>
      <div class='status-msg-bg'>
        <div class='status-msg-hidden'><data:navMessage/></div>
      </div>
    </div>
  </div>
  <div style='clear: both;'/>
  </b:if>
</b:includable>
      <b:includable id='threaded-comment-form' var='post'>
  <div class='comment-form'>
    <a name='comment-form'/>
    <b:if cond='data:mobile'>
      <p><data:blogCommentMessage/></p>
      <data:blogTeamBlogMessage/>
      <a expr:href='data:post.commentFormIframeSrc' id='comment-editor-src'/>
      <iframe allowtransparency='true' class='blogger-iframe-colorize blogger-comment-from-post' expr:height='data:cmtIframeInitialHeight' frameborder='0' id='comment-editor' name='comment-editor' src='' style='display: none' width='100%'/>
    <b:else/>
      <p><data:blogCommentMessage/></p>
      <data:blogTeamBlogMessage/>
      <a expr:href='data:post.commentFormIframeSrc' id='comment-editor-src'/>
      <iframe allowtransparency='true' class='blogger-iframe-colorize blogger-comment-from-post' expr:height='data:cmtIframeInitialHeight' frameborder='0' id='comment-editor' name='comment-editor' src='' width='100%'/>
    </b:if>
    <data:post.cmtfpIframe/>
    <script type='text/javascript'>
      BLOG_CMT_createIframe(&#39;<data:post.appRpcRelayPath/>&#39;);
    </script>
  </div>
</b:includable>
      <b:includable id='threaded_comment_js' var='post'>
  <script async='async' expr:src='data:post.commentSrc' type='text/javascript'/>

  <script type='text/javascript'>
    (function() {
      var items = <data:post.commentJso/>;
      var msgs = <data:post.commentMsgs/>;
      var config = <data:post.commentConfig/>;

// <![CDATA[
      var cursor = null;
      if (items && items.length > 0) {
        cursor = parseInt(items[items.length - 1].timestamp) + 1;
      }

      var bodyFromEntry = function(entry) {
        var text = (entry &&
                    ((entry.content && entry.content.$t) ||
                     (entry.summary && entry.summary.$t))) ||
            '';
        if (entry && entry.gd$extendedProperty) {
          for (var k in entry.gd$extendedProperty) {
            if (entry.gd$extendedProperty[k].name == 'blogger.contentRemoved') {
              return '<span class="deleted-comment">' + text + '</span>';
            }
          }
        }
        return text;
      }

      var parse = function(data) {
        cursor = null;
        var comments = [];
        if (data && data.feed && data.feed.entry) {
          for (var i = 0, entry; entry = data.feed.entry[i]; i++) {
            var comment = {};
            // comment ID, parsed out of the original id format
            var id = /blog-(\d+).post-(\d+)/.exec(entry.id.$t);
            comment.id = id ? id[2] : null;
            comment.body = bodyFromEntry(entry);
            comment.timestamp = Date.parse(entry.published.$t) + '';
            if (entry.author && entry.author.constructor === Array) {
              var auth = entry.author[0];
              if (auth) {
                comment.author = {
                  name: (auth.name ? auth.name.$t : undefined),
                  profileUrl: (auth.uri ? auth.uri.$t : undefined),
                  avatarUrl: (auth.gd$image ? auth.gd$image.src : undefined)
                };
              }
            }
            if (entry.link) {
              if (entry.link[2]) {
                comment.link = comment.permalink = entry.link[2].href;
              }
              if (entry.link[3]) {
                var pid = /.*comments\/default\/(\d+)\?.*/.exec(entry.link[3].href);
                if (pid && pid[1]) {
                  comment.parentId = pid[1];
                }
              }
            }
            comment.deleteclass = 'item-control blog-admin';
            if (entry.gd$extendedProperty) {
              for (var k in entry.gd$extendedProperty) {
                if (entry.gd$extendedProperty[k].name == 'blogger.itemClass') {
                  comment.deleteclass += ' ' + entry.gd$extendedProperty[k].value;
                } else if (entry.gd$extendedProperty[k].name == 'blogger.displayTime') {
                  comment.displayTime = entry.gd$extendedProperty[k].value;
                }
              }
            }
            comments.push(comment);
          }
        }
        return comments;
      };

      var paginator = function(callback) {
        if (hasMore()) {
          var url = config.feed + '?alt=json&v=2&orderby=published&reverse=false&max-results=50';
          if (cursor) {
            url += '&published-min=' + new Date(cursor).toISOString();
          }
          window.bloggercomments = function(data) {
            var parsed = parse(data);
            cursor = parsed.length < 50 ? null
                : parseInt(parsed[parsed.length - 1].timestamp) + 1
            callback(parsed);
            window.bloggercomments = null;
          }
          url += '&callback=bloggercomments';
          var script = document.createElement('script');
          script.type = 'text/javascript';
          script.src = url;
          document.getElementsByTagName('head')[0].appendChild(script);
        }
      };
      var hasMore = function() {
        return !!cursor;
      };
      var getMeta = function(key, comment) {
        if ('iswriter' == key) {
          var matches = !!comment.author
              && comment.author.name == config.authorName
              && comment.author.profileUrl == config.authorUrl;
          return matches ? 'true' : '';
        } else if ('deletelink' == key) {
          return config.baseUri + '/comment/delete/'
               + config.blogId + '/' + comment.id;
        } else if ('deleteclass' == key) {
          return comment.deleteclass;
        }
        return '';
      };

      var replybox = null;
      var replyUrlParts = null;
      var replyParent = undefined;

      var onReply = function(commentId, domId) {
        if (replybox == null) {
          // lazily cache replybox, and adjust to suit this style:
          replybox = document.getElementById('comment-editor');
          if (replybox != null) {
            replybox.height = '250px';
            replybox.style.display = 'block';
            replyUrlParts = replybox.src.split('#');
          }
        }
        if (replybox && (commentId !== replyParent)) {
          replybox.src = '';
          document.getElementById(domId).insertBefore(replybox, null);
          replybox.src = replyUrlParts[0]
              + (commentId ? '&parentID=' + commentId : '')
              + '#' + replyUrlParts[1];
          replyParent = commentId;
        }
      };

      var hash = (window.location.hash || '#').substring(1);
      var startThread, targetComment;
      if (/^comment-form_/.test(hash)) {
        startThread = hash.substring('comment-form_'.length);
      } else if (/^c[0-9]+$/.test(hash)) {
        targetComment = hash.substring(1);
      }

      // Configure commenting API:
      var configJso = {
        'maxDepth': config.maxThreadDepth
      };
      var provider = {
        'id': config.postId,
        'data': items,
        'loadNext': paginator,
        'hasMore': hasMore,
        'getMeta': getMeta,
        'onReply': onReply,
        'rendered': true,
        'initComment': targetComment,
        'initReplyThread': startThread,
        'config': configJso,
        'messages': msgs
      };

      var render = function() {
        if (window.goog && window.goog.comments) {
          var holder = document.getElementById('comment-holder');
          window.goog.comments.render(holder, provider);
        }
      };

      // render now, or queue to render when library loads:
      if (window.goog && window.goog.comments) {
        render();
      } else {
        window.goog = window.goog || {};
        window.goog.comments = window.goog.comments || {};
        window.goog.comments.loadQueue = window.goog.comments.loadQueue || [];
        window.goog.comments.loadQueue.push(render);
      }
    })();
// ]]>
  </script>
</b:includable>
      <b:includable id='threaded_comments' var='post'>
  <div class='comments' id='comments'>
    <a name='comments'/>
    <h4><data:post.commentLabelFull/>:</h4>

    <div class='comments-content'>
      <b:include cond='data:post.embedCommentForm' data='post' name='threaded_comment_js'/>
      <div id='comment-holder'>
         <data:post.commentHtml/>
      </div>
    </div>

    <p class='comment-footer'>
      <b:if cond='data:post.allowNewComments'>
        <b:include data='post' name='threaded-comment-form'/>
      <b:else/>
        <data:post.noNewCommentsText/>
      </b:if>
    </p>

    <b:if cond='data:showCmtPopup'>
      <div id='comment-popup'>
        <iframe allowtransparency='true' frameborder='0' id='comment-actions' name='comment-actions' scrolling='no'>
        </iframe>
      </div>
    </b:if>

    <div id='backlinks-container'>
    <div expr:id='data:widget.instanceId + &quot;_backlinks-container&quot;'>
    </div>
    </div>
  </div>
</b:includable>
    </b:widget>
  </b:section>

  <!-- Church History (New Section) -->
  <div class='section-padding' id='history' style='background:#fff;'>
    <h2 class='section-title'>تاريخ الكنيسة</h2>
    <div class='cards-grid' style='grid-template-columns: 1fr; max-width: 900px;'>
      <div class='article-card reveal' style='border:none; box-shadow:none;'>
        <div class='article-content' style='text-align:center;'>
          <p class='article-text' style='font-size:1.1rem; color:#444;'>
            تأسست كنيسة العذراء والأنبا صموئيل المعترف لخدمة شعب المنطقة بروح المحبة والعطاء. بدأت الخدمة بصلوات بسيطة ونمت بفضل نعمة الله وشفاعة القديسين.
            تتميز الكنيسة بطابعها القبطي الأصيل واهتمامها بالتعليم الكنسي وخدمة المجتمع&#1548; وتعتبر منارة روحية تشع بنور المسيح في المنطقة.
          </p>
          <div style='margin-top:20px; display:flex; gap:15px; justify-content:center;'>
             <span style='background:var(--accent); color:#fff; padding:5px 15px; border-radius:20px; font-size:0.9rem;'>تأسست 1995</span>
             <span style='background:var(--primary); color:#fff; padding:5px 15px; border-radius:20px; font-size:0.9rem;'>كاتدرائية</span>
          </div>
        </div>
      </div>
    </div>
  </div>

  <!-- Church Activities (New Section) -->
  <div class='section-padding' id='activities' style='background:#f9f9f9;'>
    <h2 class='section-title'>الأنشطة والخدمات</h2>
    <p class='section-desc'>مجالات خدمة متنوعة لتنمية المواهب والنمو الروحي.</p>
    <div class='cards-grid'>
      <div class='service-card reveal'>
        <div class='service-bg' style='background-image: url(&quot;https://upload.wikimedia.org/wikipedia/commons/thumb/2/25/Coptic_Scouts.jpg/640px-Coptic_Scouts.jpg&quot;)'/>
        <div class='service-overlay'>
          <div class='service-title'>الكشافة الكنسية</div>
          <p>تربية&#1548; نظام&#1548; وخدمة للمجتمع والكنيسة</p>
        </div>
      </div>
      <div class='service-card reveal'>
        <div class='service-bg' style='background-image: url(&quot;https://upload.wikimedia.org/wikipedia/commons/thumb/b/b3/Coptic_Deacons.jpg/640px-Coptic_Deacons.jpg&quot;)'/>
        <div class='service-overlay'>
          <div class='service-title'>مدرسة الشمامسة</div>
          <p>تعليم الألحان والطقوس الكنسية للأطفال والشباب</p>
        </div>
      </div>
      <div class='service-card reveal'>
        <div class='service-bg' style='background-image: url(&quot;https://upload.wikimedia.org/wikipedia/commons/thumb/6/66/Coptic_books.jpg/640px-Coptic_books.jpg&quot;)'/>
        <div class='service-overlay'>
          <div class='service-title'>المكتبة الاستعارية</div>
          <p>كتب روحية&#1548; طقسية&#1548; وتاريخية لجميع الأعمار</p>
        </div>
      </div>
    </div>
  </div>

  <!-- Gallery (Enhanced & Fixed) -->
  <div class='section-padding' id='gallery'>
    <h2 class='section-title'>معرض الصور</h2>
    <div class='gallery-grid'>
      <div class='gallery-item reveal' onclick='openLightbox(this)'>
        <img alt='الكنيسة من الداخل' class='gallery-img' onerror='this.src=&apos;https://upload.wikimedia.org/wikipedia/commons/9/90/Cappella_Palatina_2014.jpg&apos;' src='https://upload.wikimedia.org/wikipedia/commons/9/90/Cappella_Palatina_2014.jpg'/>
        <div class='gallery-overlay'>
          <span class='gallery-caption'>الكنيسة من الداخل</span>
        </div>
      </div>
      <div class='gallery-item reveal' onclick='openLightbox(this)'>
        <img alt='القداسات الإلهية' class='gallery-img' onerror='this.src=&apos;https://upload.wikimedia.org/wikipedia/commons/9/90/Cappella_Palatina_2014.jpg&apos;' src='https://upload.wikimedia.org/wikipedia/commons/thumb/f/f4/StMarkCoptic.jpg/640px-StMarkCoptic.jpg'/>
        <div class='gallery-overlay'>
          <span class='gallery-caption'>القداسات الإلهية</span>
        </div>
      </div>
      <div class='gallery-item reveal' onclick='openLightbox(this)'>
        <img alt='الأيقونات القبطية' class='gallery-img' onerror='this.src=&apos;https://upload.wikimedia.org/wikipedia/commons/9/90/Cappella_Palatina_2014.jpg&apos;' src='https://upload.wikimedia.org/wikipedia/commons/thumb/a/a5/Coptic_icon_of_Jesus_Christ.jpg/640px-Coptic_icon_of_Jesus_Christ.jpg'/>
        <div class='gallery-overlay'>
          <span class='gallery-caption'>الأيقونات القبطية</span>
        </div>
      </div>
      <div class='gallery-item reveal' onclick='openLightbox(this)'>
        <img alt='أنشطة الشباب' class='gallery-img' onerror='this.src=&apos;https://upload.wikimedia.org/wikipedia/commons/9/90/Cappella_Palatina_2014.jpg&apos;' src='https://upload.wikimedia.org/wikipedia/commons/thumb/4/4c/Coptic_Cross.svg/800px-Coptic_Cross.svg.png'/>
        <div class='gallery-overlay'>
          <span class='gallery-caption'>أنشطة الشباب</span>
        </div>
      </div>
    </div>
  </div>

  <!-- FAQ -->
  <div class='section-padding' id='faq' style='background:#f9f9f9;'>
    <h2 class='section-title'>الأسئلة الشائعة</h2>
    <div class='faq-grid'>
      <div class='faq-card reveal'>
        <div class='faq-q'><i class='fas fa-question-circle'/> ما هي مواعيد القداسات&#1567;</div>
        <div class='faq-a'>تقام القداسات الإلهية يومي الجمعة (7:00 ص - 9:00 ص) والأحد (6:00 ص - 8:00 ص) أسبوعيا&#1611;&#1548; بالإضافة إلى قداسات الأعياد والمناسبات الكنسية التي يتم الإعلان عنها مسبقا&#1611;.</div>
      </div>
      
      <div class='faq-card reveal'>
        <div class='faq-q'><i class='fas fa-hands-helping'/> كيف يمكنني المشاركة في الخدمة&#1567;</div>
        <div class='faq-a'>نرحب بكل من يرغب في الخدمة! يمكنك التوجه لمكتب الخدمة بالكنيسة عقب القداسات&#1548; أو التواصل مع أمين الخدمة لتحديد المجال المناسب لمواهبك (مدارس أحد&#1548; كشافة&#1548; زيارات&#1548; إلخ).</div>
      </div>
      
      <div class='faq-card reveal'>
        <div class='faq-q'><i class='fas fa-donate'/> ما هي طرق التبرع المتاحة&#1567;</div>
        <div class='faq-a'>يمكنكم التبرع عبر صناديق العطاء داخل الكنيسة&#1548; أو من خلال التحويل البنكي&#1548; خدمة إنستا باي (InstaPay)&#1548; أو فودافون كاش. تفاصيل الحسابات موجودة في قسم &quot;التبرعات&quot; بالأسفل.</div>
      </div>
      
      <div class='faq-card reveal'>
        <div class='faq-q'><i class='fas fa-child'/> هل توجد أنشطة للأطفال&#1567;</div>
        <div class='faq-a'>نعم&#1548; توجد مدارس أحد أسبوعية لجميع المراحل (ابتدائي&#1548; إعدادي&#1548; ثانوي) يوم الجمعة&#1548; بالإضافة إلى النادي الصيفي&#1548; الكشافة&#1548; والرحلات الترفيهية والتعليمية على مدار العام.</div>
      </div>
      
      <div class='faq-card reveal'>
        <div class='faq-q'><i class='fas fa-water'/> كيف أحجز موعد للمعمودية&#1567;</div>
        <div class='faq-a'>يرجى التوجه لمكتب السكرتارية يوم الأحد لتسجيل البيانات&#1548; إحضار شهادة الميلاد&#1548; وتحديد الموعد المناسب مع الآباء الكهنة لإتمام سر المعمودية المقدس.</div>
      </div>
      
      <div class='faq-card reveal'>
        <div class='faq-q'><i class='fas fa-map-marker-alt'/> أين تقع الكنيسة&#1567;</div>
        <div class='faq-a'>تقع كنيسة العذراء والأنبا صموئيل المعترف في منطقة أبيس الثورة&#1548; الإسكندرية. يمكنكم الاطلاع على الخريطة التفصيلية في قسم &quot;اتصل بنا&quot; أسفل الصفحة.</div>
      </div>
    </div>
  </div>

  <!-- Donations -->
  <!-- Donations (Redesigned) -->
  <div class='donations' id='donations'>
    <div class='section-padding'>
      <h2 class='section-title'>المساهمة في الخدمة</h2>
      <p class='section-desc'>تبرعاتكم تدعم خدمات الكنيسة وأنشطتها المختلفة.</p>
      
      <div class='don-grid'>
        <!-- Bank Account -->
        <div class='don-card reveal'>
          <div class='don-icon-wrapper'><i class='fas fa-university don-icon'/></div>
          <h3>الحساب البنكي</h3>
          <div class='don-value'>EG12345678901234567890</div>
          <button class='copy-btn' onclick='copyToClipboard(&apos;EG12345678901234567890&apos;, this)'>
            <i class='fas fa-copy'/> نسخ الرقم
          </button>
        </div>

        <!-- InstaPay -->
        <div class='don-card reveal'>
          <div class='don-icon-wrapper'><i class='fas fa-mobile-alt don-icon'/></div>
          <h3>InstaPay</h3>
          <div class='don-value'>username@instapay</div>
          <button class='copy-btn' onclick='copyToClipboard(&apos;username@instapay&apos;, this)'>
            <i class='fas fa-copy'/> نسخ العنوان
          </button>
        </div>

        <!-- Vodafone Cash -->
        <div class='don-card reveal'>
          <div class='don-icon-wrapper'><i class='fas fa-wallet don-icon'/></div>
          <h3>فودافون كاش</h3>
          <div class='don-value'>01012345678</div>
          <button class='copy-btn' onclick='copyToClipboard(&apos;01012345678&apos;, this)'>
            <i class='fas fa-copy'/> نسخ الرقم
          </button>
        </div>

        <!-- WhatsApp (In-Kind) -->
        <div class='don-card reveal'>
          <div class='don-icon-wrapper'><i class='fab fa-whatsapp don-icon'/></div>
          <h3>للتبرعات العينية</h3>
          <div class='don-value' style='background:none; padding:0; margin-bottom:15px; color:rgba(255,255,255,0.7);'>للاستفسار والتواصل المباشر</div>
          <a class='whatsapp-btn' href='https://wa.me/201234567890' target='_blank'>
            <i class='fab fa-whatsapp'/> تواصل معنا
          </a>
        </div>
      </div>
    </div>
  </div>

  <!-- Contact -->
  <div class='section-padding' id='contact' style='background:#f4f4f4;'>
    <h2 class='section-title'>اتصل بنا</h2>
    <div class='contact-grid'>
      <div class='contact-info reveal'>
        <div class='info-item'>
          <div class='info-icon'><i class='fas fa-map-marker-alt'/></div>
          <div>
            <h4>العنوان</h4>
            <p>الإسكندرية - أبيس - الثورة</p>
          </div>
        </div>
        <div class='info-item'>
          <div class='info-icon'><i class='fas fa-phone'/></div>
          <div>
            <h4>الهاتف</h4>
            <p>03 0000000</p>
          </div>
        </div>
        <div class='info-item'>
          <div class='info-icon'><i class='fab fa-whatsapp'/></div>
          <div>
            <h4>واتساب</h4>
            <p>010 0000 0000</p>
          </div>
        </div>
        <div class='info-item'>
          <div class='info-icon'><i class='fas fa-envelope'/></div>
          <div>
            <h4>البريد الإلكتروني</h4>
            <p>info@church-demo.com</p>
          </div>
        </div>
      </div>
      <div class='map-container reveal'>
        <iframe allowfullscreen='' height='100%' loading='lazy' src='https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d3413.556789012345!2d29.9876543!3d31.1234567!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x0%3A0x0!2zMzHCsDA3JzI0LjQiTiAyOcKwNTknMTUuNiJF!5e0!3m2!1sen!2seg!4v1600000000000!5m2!1sen!2seg' style='border:0;' width='100%'/>
      </div>
    </div>
  </div>

  <!-- Footer -->
  <footer>
    <div class='footer-grid'>
      <div class='footer-col'>
        <div class='logo' style='margin-bottom:20px;'>
          <div class='cross-icon'><i class='fas fa-cross'/></div>
          <div>
            <div class='logo-text'>كنيسة العذراء والأنبا صموئيل</div>
          </div>
        </div>
        <p>كنيسة قبطية أرثوذكسية تخدم شعب المنطقة بروح المحبة.</p>
        <div class='social-icons'>
          <a class='social-btn' href='#'><i class='fab fa-facebook-f'/></a>
          <a class='social-btn' href='#'><i class='fab fa-youtube'/></a>
          <a class='social-btn' href='#'><i class='fab fa-instagram'/></a>
        </div>
      </div>
      <div class='footer-col'>
        <h3>روابط سريعة</h3>
        <ul class='footer-links'>
          <li><a href='#hero'><i class='fas fa-chevron-left'/> الرئيسية</a></li>
          <li><a href='#services'><i class='fas fa-chevron-left'/> الخدمات</a></li>
          <li><a href='#articles'><i class='fas fa-chevron-left'/> المقالات</a></li>
          <li><a href='#donations'><i class='fas fa-chevron-left'/> التبرعات</a></li>
        </ul>
      </div>
      <div class='footer-col'>
        <h3>تواصل معنا</h3>
        <ul class='footer-links'>
          <li><a href='#'><i class='fas fa-phone'/> 03 0000000</a></li>
          <li><a href='#'><i class='fab fa-whatsapp'/> 010 0000 0000</a></li>
          <li><a href='#'><i class='fas fa-envelope'/> info@church.com</a></li>
        </ul>
      </div>
    </div>
    <div class='copyright'>
      <p>&#169; 2025 كنيسة العذراء والأنبا صموئيل المعترف - جميع الحقوق محفوظة</p>
    </div>
  </footer>

  <div id='scrollTop' onclick='window.scrollTo({top:0, behavior:&quot;smooth&quot;})'><i class='fas fa-arrow-up'/></div>

  <!-- Lightbox Modal -->
  <div class='lightbox' id='lightbox' onclick='closeLightbox()'>
    <span class='lightbox-close'>&#215;</span>
    <img class='lightbox-img' id='lightboxImg' src=''/>
    <div class='lightbox-caption' id='lightboxCaption'/>
  </div>

  <script>
    //<![CDATA[
    // RESET SCROLL TO TOP ON REFRESH
    if ('scrollRestoration' in history) {
      history.scrollRestoration = 'manual';
    }
    window.scrollTo(0, 0);

    // FIX: MOBILE MENU (SIMPLE TOGGLE)
    const nav = document.querySelector('nav');
    const hamburger = document.querySelector('.hamburger');
    
    // Remove any overlay
    document.querySelectorAll('.overlay').forEach(el => el.remove());

    function toggleMenu() {
      const isOpen = nav.classList.toggle('active');
      document.body.classList.toggle('menu-open');
      
      const icon = hamburger.querySelector('i');
      icon.style.transition = 'all 0.2s ease';
      icon.style.opacity = '0';
      icon.style.transform = 'scale(0.5) rotate(90deg)';
      
      setTimeout(() => {
        if (isOpen) {
          icon.classList.replace('fa-bars', 'fa-times');
        } else {
          icon.classList.replace('fa-times', 'fa-bars');
        }
        icon.style.opacity = '1';
        icon.style.transform = 'scale(1) rotate(0deg)';
      }, 200);
    }

    hamburger.addEventListener('click', (e) => {
      e.stopPropagation();
      toggleMenu();
    });
    
    // Close ONLY on link click
    document.querySelectorAll('nav a').forEach(link => {
      link.addEventListener('click', () => {
        if(nav.classList.contains('active')) toggleMenu();
      });
    });

    // FIX: HEADER ANIMATION (REMOVED FOR STABILITY)
    // Header is now CSS sticky only, no JS resize logic.

    // ENHANCEMENT: LOGO INTERACTION (CSS ONLY)
    // Hover effects handled in CSS. Click scrolls to top via inline onclick.

    // Daily Verse Logic
    const verses = [
      {t:"ٱلرَّبُّ نُورِي وَخَلَاصِي، مِمَّنْ أَخَافُ؟", r:"(مزمور 27 : 1)"},
      {t:"لأَنَّهُ تَعَلَّقَ بِي أُنَجِّيهِ. أُرَفِّعُهُ لأَنَّهُ عَرَفَ اسْمِي.", r:"(مزمور 91 : 14)"},
      {t:"تَوَكَّلْ عَلَى الرَّبِّ بِكُلِّ قَلْبِكَ، وَعَلَى فَهْمِكَ لاَ تَعْتَمِدْ.", r:"(أمثال 3 : 5)"},
      {t:"أَسْتَطِيعُ كُلَّ شَيْءٍ فِي الْمَسِيحِ الَّذِي يُقَوِّينِي.", r:"(فيلبي 4 : 13)"},
      {t:"فَرِحْتُ بِالْقَائِلِينَ لِي: «إِلَى بَيْتِ الرَّبِّ نَذْهَبُ».", r:"(مزمور 122 : 1)"}
    ];
    const today = new Date().getDate() % verses.length;
    const verseEl = document.getElementById('dailyVerse');
    if(verseEl) {
        verseEl.innerText = verses[today].t;
        document.getElementById('dailyRef').innerText = verses[today].r;
    }

    // Copy To Clipboard
    window.copyToClipboard = function(text) {
      navigator.clipboard.writeText(text).then(() => {
        alert('تم النسخ بنجاح: ' + text);
      });
    }

    // Toggle Accordion


    // Lightbox Logic
    const lightbox = document.getElementById('lightbox');
    const lightboxImg = document.getElementById('lightboxImg');
    const lightboxCaption = document.getElementById('lightboxCaption');

    window.openLightbox = function(element) {
      const img = element.querySelector('img');
      const caption = element.querySelector('.gallery-caption').innerText;
      lightboxImg.src = img.src;
      lightboxCaption.innerText = caption;
      lightbox.classList.add('active');
      document.body.style.overflow = 'hidden';
    }

    window.closeLightbox = function() {
      lightbox.classList.remove('active');
      document.body.style.overflow = 'auto';
    }

    // Scroll Progress & Scroll Top
    window.addEventListener('scroll', () => {
      const winScroll = document.body.scrollTop || document.documentElement.scrollTop;
      const height = document.documentElement.scrollHeight - document.documentElement.clientHeight;
      const scrolled = (winScroll / height) * 100;
      const progress = document.getElementById('scrollProgress');
      if(progress) progress.style.width = scrolled + "%";

      const scrollTopBtn = document.getElementById('scrollTop');
      if(scrollTopBtn) {
        if (winScroll > 300) scrollTopBtn.classList.add('show');
        else scrollTopBtn.classList.remove('show');
      }
    }, { passive: true });

    // Intersection Observer
    const observer = new IntersectionObserver((entries) => {
      entries.forEach(entry => {
        if (entry.isIntersecting) {
          entry.target.classList.add('active');
          observer.unobserve(entry.target);
        }
      });
    }, { threshold: 0.1 });
    document.querySelectorAll('.reveal').forEach(el => observer.observe(el));

    // Copy to Clipboard (Subtle Feedback)
    function copyToClipboard(text, btn) {
      navigator.clipboard.writeText(text).then(() => {
        const originalHTML = btn.innerHTML;
        btn.innerHTML = '<i class="fas fa-check"></i> تم النسخ';
        btn.style.borderColor = '#25D366';
        btn.style.color = '#25D366';
        
        setTimeout(() => {
          btn.innerHTML = originalHTML;
          btn.style.borderColor = '';
          btn.style.color = '';
        }, 2000);
      });
    }
    
    // Button Ripple Effect
    document.querySelectorAll('.btn, .copy-btn, button, .read-more').forEach(btn => {
      btn.addEventListener('click', function(e) {
        let ripple = document.createElement('span');
        ripple.classList.add('ripple');
        let rect = this.getBoundingClientRect();
        let size = Math.max(rect.width, rect.height);
        ripple.style.width = ripple.style.height = size + 'px';
        ripple.style.left = (e.clientX - rect.left - size/2) + 'px';
        ripple.style.top = (e.clientY - rect.top - size/2) + 'px';
        this.appendChild(ripple);
        setTimeout(() => ripple.remove(), 600);
      });
    });
    //]]>
  </script>
</body>
</html>
