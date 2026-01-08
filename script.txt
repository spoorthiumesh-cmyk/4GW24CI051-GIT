let queue = [];
let processed = [];

function addStudent() {
    const name = document.getElementById("name").value;
    if (name === "") return;

    queue.push(name); // enqueue
    document.getElementById("name").value = "";
    display();
}

function processStudent() {
    if (queue.length === 0) return;

    const student = queue.shift(); // dequeue
    processed.push(student);
    display();
}

function display() {
    const queueList = document.getElementById("queueList");
    const processedList = document.getElementById("processedList");

    queueList.innerHTML = "";
    processedList.innerHTML = "";

    queue.forEach(name => {
        queueList.innerHTML += `<li>${name}</li>`;
    });

    processed.forEach(name => {
        processedList.innerHTML += `<li>${name}</li>`;
    });
}
