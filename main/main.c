
#include <string.h>
#include "esp_udp.h"

#define WIFI_SSID		"ESP_DEBUG_NETWORK"
#define WIFI_PASS		"esp_debugdebug"

void app_main(void)
{
	esp_udp_init(WIFI_SSID,WIFI_PASS);
}