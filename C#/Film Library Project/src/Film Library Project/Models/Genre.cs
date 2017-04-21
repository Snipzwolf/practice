using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Serialization;
using System.Threading.Tasks;

namespace Film_Library_Project.Models
{
    [DataContract]
    public class Genre
    {
        
        public Genre() { }

        [DataMember]
        public int id { get; set; }

        [DataMember]
        public string name { get; set; }

    }
}
}
