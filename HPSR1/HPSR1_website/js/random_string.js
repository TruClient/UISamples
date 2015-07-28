function gen() {
    var divElem = document.getElementById("generated_data");
    if (!divElem) {
      divElem = document.createElement("div");
      var body = document.getElementById("generated_data");
      body.appendChild(divElem);
    }
    divElem.textContent = "No. " + Math.floor(Math.random() * 100);
}
