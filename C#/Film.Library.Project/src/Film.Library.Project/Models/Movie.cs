using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Serialization;
using System.Threading.Tasks;

namespace Film_Library_Project.Models
{
    [DataContract]
    public class Movie
    {
        public Movie() { }

        [DataMember]
        public int Id { get; set; }

        [DataMember]
        public string ImdbId { get; set; }

        [DataMember]
        public string Name { get; set; }

        [DataMember]
        public DateTime Released { get; set; }

        [DataMember]
        public TimeSpan RunTime { get; set; }

        [DataMember]
        public HashSet<Genre> Genres { get; set; }
    }
}
