using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;

namespace Film_Library_Project.Controllers
{
    [Route("api/[controller]")]
    public class MovieController : Controller
    {
        // GET api/movie
        [HttpGet]
        public IEnumerable<string> Get()
        {
            //TODO get from db
            return new string[] { "value1", "value2" };
        }

        // GET api/movie/5
        [HttpGet("{id}")]
        public string Get(int id)
        {

            return "value";
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
