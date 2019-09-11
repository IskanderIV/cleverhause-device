//Request. UI. receive board UID
{
  "username": "username",
  "password": "password_in_MD5",
  "boardUID": "",
  "input": ""
}

//Response. UI. send board UID
{
  "message": "",
  "output": {
    "boardUID": "UID"
  }
}

//Request. BOARD.  Registration json from board. You click on Get UID and enter to board manually.
// After that send registration request to server and get 200 back
// This informaton is needed also for painting on ui screen
{
  "username": "username",
  "password": "password_in_MD5",
  "boardUID": "UID",
  "devices": [
    {
      "id": 1,
      "min": 0,
      "max": 1,
      "discrete": 1,
      "adj": true,
      "rotate": true,
      "signaling": true
    },
    {
      "id": 2,
      "min": 0,
      "max": 5,
      "discrete": 0.1,
      "adj": true,
      "rotate": true,
      "signaling": true
    }
  ]
}

//Response. BOARD. Send registration answer 200 OK

//Request. BOARD. Normal work
{
  "username": "username",
  "password": "password_in_MD5",
  "boardUID": "UID",
  "devices": [
    {
      "id": 1,
      "ack": 5,
      "adj": false,
      "ctrlVal": 0,
      "radioErr": false
    },
    {
      "id": 2,
      "ack": 0.6,
      "adj": false,
      "ctrlVal": 0.6,
      "radioErr": false
    },
    {
      "id": 3,
      "ack": 0.5,
      "adj": true,
      "ctrlVal": 0.7,
      "radioErr": true
    }
  ],
  "errors": {
    "gsm": false,
    "lcd": false,
    "radio": false
  }
}

// Response. BOARD. Normal work
{
  "message": "",
  "output": {
    "boardUID": "UID",
    "devices": [
      {
        "id": 1,
        "ack": 5,
        "adj": false,
        "ctrlVal": 0,
        "radioErr": false
      },
      {
        "id": 2,
        "ack": 0.6,
        "adj": false,
        "ctrlVal": 0.6,
        "radioErr": false
      },
      {
        "id": 3,
        "ack": 0.5,
        "adj": true,
        "ctrlVal": 0.7,
        "radioErr": true
      }
    ],
    "errors": {
      "gsm": false,
      "lcd": false,
      "radio": false
    }
  }
}

//Request. UI. Control data
{
  "username": "username",
  "password": "password_in_MD5",
  "boardUID": "UID",
  "devices": [
    {
      "id": 1,
      "ctrlVal": 0
    }
  ]
}

//Response. UI. Control data 200 ok
{
  "message": "",
  "output": {
    // controlled by saved structure
    "boardUID": "UID",
    "devices": [
      {
        "id": 1,
        "ctrlVal": 0
      }
    ]
  }
}