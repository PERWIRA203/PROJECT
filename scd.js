document.addEventListener('DOMContentLoaded', function () {
    const scrollButton = document.getElementById('scrollButton');

    scrollButton.addEventListener('click', function () {
        const section2 = document.getElementById('section2');
        section2.scrollIntoView({ behavior: 'smooth' });
    });
});
