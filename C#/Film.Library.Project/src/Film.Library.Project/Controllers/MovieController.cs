using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using Film_Library_Project.Services;
using Film_Library_Project.Models;

namespace Film_Library_Project.Controllers
{
    [Route("api/[controller]")]
    public class MovieController : Controller
    {
        private readonly OmdbApiService apiService;

        public MovieController(OmdbApiService apiService)
        {
            this.apiService = apiService;
        }

        // GET api/movie
        [HttpGet]
        public IEnumerable<string> Get()
        {
            //TODO get from db
            return new string[] { "value1", "value2" };
        }

        // GET api/movie/5
        [HttpGet("{id}")]
        public IActionResult Get(string id)
        {
            return new ObjectResult(new string[] { "ss"});
            return new ObjectResult(apiService.getMovieByImdbId(id));
        }

        // POST api/movie
        [HttpPost]
        public void Post([FromBody]string value)
        {
        }

        // PUT api/movie/5
        [HttpPut("{id}")]
        public void Put(int id, [FromBody]string value)
        {
        }

        // DELETE api/movie/5
        [HttpDelete("{id}")]
        public void Delete(int id)
        {
        }
    }
}
