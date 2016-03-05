using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Project.Models
{
    class Movie
    {
        public int Id { get; set; }
        public string ImdbId { get; set; }

        public string Name { get; set; }
        public DateTime Released { get; set; }
        public TimeSpan RunTime { get; set; }
        public HashSet<Genre> Genres { get; set; }
    }
}
