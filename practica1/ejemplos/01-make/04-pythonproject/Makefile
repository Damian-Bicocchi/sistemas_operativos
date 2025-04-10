PYTHON=python3.12
PIP=.venv/bin/pip
FLASK=.venv/bin/flask
TEST_RUNNER=.venv/bin/python -m unittest

all: app

# Python virtualenv
.venv: requirements.txt
	$(PYTHON) -m venv .venv
	$(PIP) install -r requirements.txt

app: .venv
	$(FLASK) run --host=127.0.0.1 --port=5000 --reload --debugger

test: .venv
	$(TEST_RUNNER)

clean:
	rm -fr .venv
	rm -f poetry.lock

.PHONY: all clean app