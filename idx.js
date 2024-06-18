document.addEventListener('play', (event) => {
    const audios = [...document.getElementsByTagName('audio')];
    
    audios.forEach((audio) => audio !== event.target && audio.pause());
  }, true);