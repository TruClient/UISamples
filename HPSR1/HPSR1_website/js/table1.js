function getStatus(){
  var sibling = this.parentNode.nextSibling;
  if (sibling.textContent == "Open"){
    sibling.textContent = "Closed"
  }
  else{
    sibling.textContent = "Error"
  }
}

function generate() {
  var numberOfCells = Math.floor((Math.random() * 10) + 1);
  var t = document.getElementsByTagName('TABLE');
  var body = document.getElementById("container");

  var element = document.getElementById("mytable");
  if (element) {
    element.parentNode.removeChild(element);
  }

  // creates a <table> element and a <tbody> element
  var tbl     = document.createElement("table");
  tbl.setAttribute("id", "mytable")
  var tblBody = document.createElement("tbody");

  // creating all cells
  for (var j = 0; j < numberOfCells + 1; j++) {
      // creates a table row
      var row = document.createElement("tr");
      for (var i = 0; i < 2; i++) {
          // Create a <td> element and a text node, make the text
          // node the contents of the <td>, and put the <td> at
          // the end of the table row
          var cell = document.createElement("td");
          if (j == 0) {
            var cellText = document.createTextNode("Header " + i);
            cell.appendChild(cellText);
            row.appendChild(cell);
            continue;
          }
          if (i == 0){
            var button = document.createElement("input");
            button.type = "button"
            cell.appendChild(button);
            button.value = "Submit Data";
            button.addEventListener('click', getStatus);
          }
          else{
            var text = Math.random() < 0.5 ? "Open" : "Closed";
            var cellText = document.createTextNode(text);
            cell.appendChild(cellText);
          }
          row.appendChild(cell);
      }

      // add the row to the end of the table body
      tblBody.appendChild(row);
  }

  // put the <tbody> in the <table>
  tbl.appendChild(tblBody);
  // appends <table> into <body>
  body.appendChild(tbl);
}
(function () {
  $(document).ready(function() {

    generate();

  });
})();
