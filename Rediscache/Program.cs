using StackExchange.Redis;

// connection string to your Redis Cache    
// string connectionString = "M3c6KNxS0XrNIpovnFCWNQzgN8U4tG2HeAzCaLFAgGg=";

namespace Rediscache
{
    class Program
    {
        public static async Task Main(string[] args)
        {
            string connectionString = "az204redis697.redis.cache.windows.net:6380,password=M3c6KNxS0XrNIpovnFCWNQzgN8U4tG2HeAzCaLFAgGg=,ssl=True,abortConnect=False";
            var cache = ConnectionMultiplexer.Connect(connectionString);

            IDatabase db = cache.GetDatabase();

            // Snippet below executes a PING to test the server connection
            var result = await db.ExecuteAsync("ping");
            Console.WriteLine($"PING = {result.Resp2Type} : {result}");

            // Call StringSetAsync on the IDatabase object to set the key "test:key" to the value "100"
            bool setValue = await db.StringSetAsync("test:key", "100");
            Console.WriteLine($"SET: {setValue}");

            // StringGetAsync retrieves the value for the "test" key
            string getValue = await db.StringGetAsync("test:key");
            Console.WriteLine($"GET: {getValue}");
        }
    }
}