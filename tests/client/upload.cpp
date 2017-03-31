#include <catch.hpp>
#include <yadisk/client.hpp>
using ydclient = yadisk::Client;

#include <string>
#include <list>

#include <url/path.hpp>
using url::path;

TEST_CASE("download file on Disk", "[client][set][api_url][file]") {
    std::string token = "AQAAAAATPnx3AAQXOJS1w4zmPUdrsJNR1FATxEM";
    string api_url{"https://cloud-api.yandex.net/v1/disk"};
    path resource{ "/file.dat" };
    ydclient client{ token };
    std::list<std::string> fields {};
    auto info = client.upload(to, api_url, fields);
    REQUIRE(not info.empty());
