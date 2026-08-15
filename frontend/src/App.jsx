import { useState, useEffect } from 'react'
import axios from 'axios'
import './App.css'

function App() {
  const [jokes, setJokes] = useState([])
  const [loading, setLoading] = useState(true)

  useEffect(() => {
    axios
      .get('/api/jokes')
      .then((res) => {
        setJokes(res.data)
        setLoading(false)
      })
      .catch((err) => {
        console.error(err)
        setLoading(false)
      })
  }, [])

  return (
    <div className="app-wrapper">
      <div className="container">
        {/* Header Section */}
        <header className="header">
          <span className="badge">⚡ Full Stack Express + React</span>
          <h1 className="title">
            Daily <span className="gradient-text">Jokes</span>
          </h1>
          <p className="subtitle">
            Serving laugh-out-loud humor fetched live from your custom backend API.
          </p>
          <div className="counter-pill">
            <span>Total Jokes Loaded</span>
            <span className="count">{jokes.length}</span>
          </div>
        </header>

        {/* Jokes List / Loader */}
        {loading ? (
          <div className="loader-container">
            <div className="spinner"></div>
            <p>Fetching the best jokes for you...</p>
          </div>
        ) : (
          <div className="jokes-grid">
            {jokes.map((joke, index) => (
              <div key={joke.id || index} className="joke-card">
                <div className="card-header">
                  <span className="joke-num">Joke #{index + 1}</span>
                  <span className="emoji">😄</span>
                </div>
                <p className="joke-content">{joke.joke}</p>
              </div>
            ))}
          </div>
        )}
      </div>
    </div>
  )
}

export default App