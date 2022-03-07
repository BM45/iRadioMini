#ifndef _SDCARD_H_
#define _SDCARD_H_

#include "periph_wifi.h"

/**
 * @brief      Create Wi-Fi peripheral configuration from wifi.txt on sdcard. 
 *
 * @param      void
 *
 * @return     The Wi-Fi peripheral configuration. 
 */

periph_wifi_cfg_t readWifiConfigSDCard();



/**
 * @brief      Create channel list from playlist.m3u on sdcard. 
 *
 * @param      void
 *
 * @return     void 
 */
void readPlaylistSDCard();


/**
 * @brief      Read AM-TX Configfile from sdcard. 
 *
 * @param      void
 *
 * @return     ESP_OK, ESP_FAIL
 */
esp_err_t readAMTXConfigSDCard();


#endif
