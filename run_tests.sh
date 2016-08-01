source ~/.bashrc #for local testing
rm tests/build/html5/kha.js
khamake --from tests/ --to tests/build -t html5
node tests/build/html5/kha.js