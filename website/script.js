function openNav() {
    document.querySelector(".menu-overlay").style.width = "100%";
    document.querySelector(".menu-overlay").style.opacity = "1";
    document.querySelector(".menu-overlay").style.left = "0";
}
  
function closeNav() {
    document.querySelector(".menu-overlay").style.opacity = "0";
    document.querySelector(".menu-overlay").style.width = "0%";
    document.querySelector(".menu-overlay").style.left = "100%";
}

function scrollDown(target)
{
    document.getElementById(target).scrollIntoView
    ({
        behavior: 'smooth',
    });
}

function setYear() {
    const y = new Date().getFullYear();
    document.getElementById('year').innerHTML = y;
}