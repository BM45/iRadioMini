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


/**
 * @brief      Scan sdcard for audiofiles and (if found) start playback. 
 *
 * @param      void
 *
 * @return     esp_err_t
 */
esp_err_t start_mediaplayer_service();


/**
 * @brief      Stop audiofile playback -> activate internetradio mode. 
 *
 * @param      void
 *
 * @return     esp_err_t
 */
esp_err_t stop_mediaplayer_service();


/**
 * @brief      Write EQ-settings to sdcard. 
 *
 * @param      void
 *
 * @return     ESP_OK, ESP_FAIL
 */
esp_err_t saveEQ_SDCard();

/**
 * @brief      Read EQ-settings from sdcard. 
 *
 * @param      void
 *
 * @return     ESP_OK, ESP_FAIL
 */
esp_err_t readEQ_SDCard();

#endif
