// /pattern/modifier(s)
// g => econtrar no texto todo e não parar quando encontrar um ocorrência.
// script to search all words in the page HTML

// importing libs
const cheerio = require('cheerio');
const request = require('request');

request(
	// url
	{ uri: "https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Introduction"},

	// request to url
	function (error, response, body) {

		// instantianting
		const $ = cheerio.load(body);
		const text = $('p').text();

		// search is
		let patternSearchIs = /of/g;
		let allWordIs = text.match(patternSearchIs);
		let numberOfWordIs = allWordIs.length;
		console.log(allWordIs);
		console.log(`Exist ${numberOfWordIs} word "is"!`);

		// search the
		let patternSearchThe = /the/g;
		let allWordThe = text.match(patternSearchThe);
		let numberOfWordThe = allWordThe.length;
		console.log(allWordThe);
		console.log(`Exist ${numberOfWordThe} word "the"!`);

        // search JavaScript
		let patternSearchJavaScript = /JavaScript/g;
		let allWordJavaScript = text.match(patternSearchJavaScript);
		let numberOfWordJavaScript = allWordJavaScript.length;
		console.log(allWordJavaScript);
		console.log(`Exist ${numberOfWordJavaScript} word "JavaScript"!`);
	}
);


