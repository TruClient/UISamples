function generate() {
			var numberOfCells = Math.floor((Math.random() * 10) + 1);
			var t = document.getElementsByTagName('TABLE');
			var coloredRow = Math.floor(Math.random() * numberOfCells);
			if (coloredRow == 0)
				coloredRow = 1;
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
						for (var i = 0; i < 5; i++) {
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
									var check = document.createElement("input");
									check.type = "checkbox"
									cell.appendChild(check);
									check.checked = Math.random() < 0.5 ? true : false;
								}
								var cellText = document.createTextNode("Table Cell");
								cell.appendChild(cellText);
								row.appendChild(cell);
								if (j == coloredRow && i==0){
									cell.setAttribute("style", "background-color:#AAAAAA");
								}
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
