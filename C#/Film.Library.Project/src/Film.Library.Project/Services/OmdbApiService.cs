using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;

namespace Film_Library_Project.Services
{
    public class OmdbApiService
    {
        private readonly Uri apiUri;

        public OmdbApiService()
        {
            apiUri = new UriBuilder("http", "www.omdbapi.com", 80).Uri;
        }

        public Movie getMovieByImdbId(string id)
        {
            HttpWebRequest request = getApiUri(new Dictionary<string, string>(){
                { "i",  id },
                { "type", "movie" },
                { "plot", "full" },
                { "r", "json" }
            });
        }

        private HttpWebRequest getApiUri(Dictionary<String, String> qs)
        {
            UriBuilder requestUri = new UriBuilder(apiUri);

            requestUri.Path = path;
            if(qs.Count > 0)
            {
                StringBuilder sb = qs.Aggregate(new StringBuilder(), (a, b) => {
                    if (a.Length > 0)
                    {
                        a.Append("&");
                    }                        

                    a.Append(b); //TODO maybe url encode??
                    return a;
                });

                requestUri.Query = sb.ToString();
            }

            HttpWebRequest ret = WebRequest.CreateHttp(requestUri.Uri);

            return ret;
        }
    }
}
