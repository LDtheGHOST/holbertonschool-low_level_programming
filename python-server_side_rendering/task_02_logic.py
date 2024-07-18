from flask import Flask, render_template
import json

app = Flask(__name__)

@app.route('/items')
def items():
    
    with open('items.json') as f:
        data = json.load(f)
    return render_template('items.html', items=data['items'])

if __name__ == '__main__':
    app.run(debug=True) 