import fs from "fs";

const exNumber = process.argv[2];

if (!exNumber || !Number.parseInt(exNumber)) {
  throw new Error("Number not detected " + process.argv.join(" | "));
}

const filePath = "./exercises.cpp";
const exercises = fs.readFileSync(filePath, "utf8");

let lines = exercises.split("\n");
let lastIncludeLineIndex = lines.findLastIndex((line) =>
  line.includes("#include")
);
const lastLine = lines[lastIncludeLineIndex];
lines[
  lastIncludeLineIndex
] = `${lastLine} \n #include "./e${exNumber}/e${exNumber}.h"`;

lines = lines.join("\n");
fs.writeFileSync(filePath, lines + "\n", "utf-8");
