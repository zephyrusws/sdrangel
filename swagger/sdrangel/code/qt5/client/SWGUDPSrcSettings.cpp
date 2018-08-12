/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations and specifcities:       * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.0.6
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGUDPSrcSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGUDPSrcSettings::SWGUDPSrcSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUDPSrcSettings::SWGUDPSrcSettings() {
    output_sample_rate = 0.0f;
    m_output_sample_rate_isSet = false;
    sample_format = 0;
    m_sample_format_isSet = false;
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    fm_deviation = 0;
    m_fm_deviation_isSet = false;
    channel_mute = 0;
    m_channel_mute_isSet = false;
    gain = 0.0f;
    m_gain_isSet = false;
    squelch_db = 0;
    m_squelch_db_isSet = false;
    squelch_gate = 0;
    m_squelch_gate_isSet = false;
    squelch_enabled = 0;
    m_squelch_enabled_isSet = false;
    agc = 0;
    m_agc_isSet = false;
    audio_active = 0;
    m_audio_active_isSet = false;
    audio_stereo = 0;
    m_audio_stereo_isSet = false;
    volume = 0;
    m_volume_isSet = false;
    udp_address = nullptr;
    m_udp_address_isSet = false;
    udp_port = 0;
    m_udp_port_isSet = false;
    audio_port = 0;
    m_audio_port_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = nullptr;
    m_title_isSet = false;
}

SWGUDPSrcSettings::~SWGUDPSrcSettings() {
    this->cleanup();
}

void
SWGUDPSrcSettings::init() {
    output_sample_rate = 0.0f;
    m_output_sample_rate_isSet = false;
    sample_format = 0;
    m_sample_format_isSet = false;
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    fm_deviation = 0;
    m_fm_deviation_isSet = false;
    channel_mute = 0;
    m_channel_mute_isSet = false;
    gain = 0.0f;
    m_gain_isSet = false;
    squelch_db = 0;
    m_squelch_db_isSet = false;
    squelch_gate = 0;
    m_squelch_gate_isSet = false;
    squelch_enabled = 0;
    m_squelch_enabled_isSet = false;
    agc = 0;
    m_agc_isSet = false;
    audio_active = 0;
    m_audio_active_isSet = false;
    audio_stereo = 0;
    m_audio_stereo_isSet = false;
    volume = 0;
    m_volume_isSet = false;
    udp_address = new QString("");
    m_udp_address_isSet = false;
    udp_port = 0;
    m_udp_port_isSet = false;
    audio_port = 0;
    m_audio_port_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = new QString("");
    m_title_isSet = false;
}

void
SWGUDPSrcSettings::cleanup() {














    if(udp_address != nullptr) { 
        delete udp_address;
    }



    if(title != nullptr) { 
        delete title;
    }
}

SWGUDPSrcSettings*
SWGUDPSrcSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUDPSrcSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&output_sample_rate, pJson["outputSampleRate"], "float", "");
    
    ::SWGSDRangel::setValue(&sample_format, pJson["sampleFormat"], "qint32", "");
    
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint64", "");
    
    ::SWGSDRangel::setValue(&rf_bandwidth, pJson["rfBandwidth"], "float", "");
    
    ::SWGSDRangel::setValue(&fm_deviation, pJson["fmDeviation"], "qint32", "");
    
    ::SWGSDRangel::setValue(&channel_mute, pJson["channelMute"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gain, pJson["gain"], "float", "");
    
    ::SWGSDRangel::setValue(&squelch_db, pJson["squelchDB"], "qint32", "");
    
    ::SWGSDRangel::setValue(&squelch_gate, pJson["squelchGate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&squelch_enabled, pJson["squelchEnabled"], "qint32", "");
    
    ::SWGSDRangel::setValue(&agc, pJson["agc"], "qint32", "");
    
    ::SWGSDRangel::setValue(&audio_active, pJson["audioActive"], "qint32", "");
    
    ::SWGSDRangel::setValue(&audio_stereo, pJson["audioStereo"], "qint32", "");
    
    ::SWGSDRangel::setValue(&volume, pJson["volume"], "qint32", "");
    
    ::SWGSDRangel::setValue(&udp_address, pJson["udpAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&udp_port, pJson["udpPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&audio_port, pJson["audioPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
}

QString
SWGUDPSrcSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGUDPSrcSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_output_sample_rate_isSet){
        obj->insert("outputSampleRate", QJsonValue(output_sample_rate));
    }
    if(m_sample_format_isSet){
        obj->insert("sampleFormat", QJsonValue(sample_format));
    }
    if(m_input_frequency_offset_isSet){
        obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));
    }
    if(m_rf_bandwidth_isSet){
        obj->insert("rfBandwidth", QJsonValue(rf_bandwidth));
    }
    if(m_fm_deviation_isSet){
        obj->insert("fmDeviation", QJsonValue(fm_deviation));
    }
    if(m_channel_mute_isSet){
        obj->insert("channelMute", QJsonValue(channel_mute));
    }
    if(m_gain_isSet){
        obj->insert("gain", QJsonValue(gain));
    }
    if(m_squelch_db_isSet){
        obj->insert("squelchDB", QJsonValue(squelch_db));
    }
    if(m_squelch_gate_isSet){
        obj->insert("squelchGate", QJsonValue(squelch_gate));
    }
    if(m_squelch_enabled_isSet){
        obj->insert("squelchEnabled", QJsonValue(squelch_enabled));
    }
    if(m_agc_isSet){
        obj->insert("agc", QJsonValue(agc));
    }
    if(m_audio_active_isSet){
        obj->insert("audioActive", QJsonValue(audio_active));
    }
    if(m_audio_stereo_isSet){
        obj->insert("audioStereo", QJsonValue(audio_stereo));
    }
    if(m_volume_isSet){
        obj->insert("volume", QJsonValue(volume));
    }
    if(udp_address != nullptr && *udp_address != QString("")){
        toJsonValue(QString("udpAddress"), udp_address, obj, QString("QString"));
    }
    if(m_udp_port_isSet){
        obj->insert("udpPort", QJsonValue(udp_port));
    }
    if(m_audio_port_isSet){
        obj->insert("audioPort", QJsonValue(audio_port));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }

    return obj;
}

float
SWGUDPSrcSettings::getOutputSampleRate() {
    return output_sample_rate;
}
void
SWGUDPSrcSettings::setOutputSampleRate(float output_sample_rate) {
    this->output_sample_rate = output_sample_rate;
    this->m_output_sample_rate_isSet = true;
}

qint32
SWGUDPSrcSettings::getSampleFormat() {
    return sample_format;
}
void
SWGUDPSrcSettings::setSampleFormat(qint32 sample_format) {
    this->sample_format = sample_format;
    this->m_sample_format_isSet = true;
}

qint64
SWGUDPSrcSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGUDPSrcSettings::setInputFrequencyOffset(qint64 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
    this->m_input_frequency_offset_isSet = true;
}

float
SWGUDPSrcSettings::getRfBandwidth() {
    return rf_bandwidth;
}
void
SWGUDPSrcSettings::setRfBandwidth(float rf_bandwidth) {
    this->rf_bandwidth = rf_bandwidth;
    this->m_rf_bandwidth_isSet = true;
}

qint32
SWGUDPSrcSettings::getFmDeviation() {
    return fm_deviation;
}
void
SWGUDPSrcSettings::setFmDeviation(qint32 fm_deviation) {
    this->fm_deviation = fm_deviation;
    this->m_fm_deviation_isSet = true;
}

qint32
SWGUDPSrcSettings::getChannelMute() {
    return channel_mute;
}
void
SWGUDPSrcSettings::setChannelMute(qint32 channel_mute) {
    this->channel_mute = channel_mute;
    this->m_channel_mute_isSet = true;
}

float
SWGUDPSrcSettings::getGain() {
    return gain;
}
void
SWGUDPSrcSettings::setGain(float gain) {
    this->gain = gain;
    this->m_gain_isSet = true;
}

qint32
SWGUDPSrcSettings::getSquelchDb() {
    return squelch_db;
}
void
SWGUDPSrcSettings::setSquelchDb(qint32 squelch_db) {
    this->squelch_db = squelch_db;
    this->m_squelch_db_isSet = true;
}

qint32
SWGUDPSrcSettings::getSquelchGate() {
    return squelch_gate;
}
void
SWGUDPSrcSettings::setSquelchGate(qint32 squelch_gate) {
    this->squelch_gate = squelch_gate;
    this->m_squelch_gate_isSet = true;
}

qint32
SWGUDPSrcSettings::getSquelchEnabled() {
    return squelch_enabled;
}
void
SWGUDPSrcSettings::setSquelchEnabled(qint32 squelch_enabled) {
    this->squelch_enabled = squelch_enabled;
    this->m_squelch_enabled_isSet = true;
}

qint32
SWGUDPSrcSettings::getAgc() {
    return agc;
}
void
SWGUDPSrcSettings::setAgc(qint32 agc) {
    this->agc = agc;
    this->m_agc_isSet = true;
}

qint32
SWGUDPSrcSettings::getAudioActive() {
    return audio_active;
}
void
SWGUDPSrcSettings::setAudioActive(qint32 audio_active) {
    this->audio_active = audio_active;
    this->m_audio_active_isSet = true;
}

qint32
SWGUDPSrcSettings::getAudioStereo() {
    return audio_stereo;
}
void
SWGUDPSrcSettings::setAudioStereo(qint32 audio_stereo) {
    this->audio_stereo = audio_stereo;
    this->m_audio_stereo_isSet = true;
}

qint32
SWGUDPSrcSettings::getVolume() {
    return volume;
}
void
SWGUDPSrcSettings::setVolume(qint32 volume) {
    this->volume = volume;
    this->m_volume_isSet = true;
}

QString*
SWGUDPSrcSettings::getUdpAddress() {
    return udp_address;
}
void
SWGUDPSrcSettings::setUdpAddress(QString* udp_address) {
    this->udp_address = udp_address;
    this->m_udp_address_isSet = true;
}

qint32
SWGUDPSrcSettings::getUdpPort() {
    return udp_port;
}
void
SWGUDPSrcSettings::setUdpPort(qint32 udp_port) {
    this->udp_port = udp_port;
    this->m_udp_port_isSet = true;
}

qint32
SWGUDPSrcSettings::getAudioPort() {
    return audio_port;
}
void
SWGUDPSrcSettings::setAudioPort(qint32 audio_port) {
    this->audio_port = audio_port;
    this->m_audio_port_isSet = true;
}

qint32
SWGUDPSrcSettings::getRgbColor() {
    return rgb_color;
}
void
SWGUDPSrcSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGUDPSrcSettings::getTitle() {
    return title;
}
void
SWGUDPSrcSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}


bool
SWGUDPSrcSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_output_sample_rate_isSet){ isObjectUpdated = true; break;}
        if(m_sample_format_isSet){ isObjectUpdated = true; break;}
        if(m_input_frequency_offset_isSet){ isObjectUpdated = true; break;}
        if(m_rf_bandwidth_isSet){ isObjectUpdated = true; break;}
        if(m_fm_deviation_isSet){ isObjectUpdated = true; break;}
        if(m_channel_mute_isSet){ isObjectUpdated = true; break;}
        if(m_gain_isSet){ isObjectUpdated = true; break;}
        if(m_squelch_db_isSet){ isObjectUpdated = true; break;}
        if(m_squelch_gate_isSet){ isObjectUpdated = true; break;}
        if(m_squelch_enabled_isSet){ isObjectUpdated = true; break;}
        if(m_agc_isSet){ isObjectUpdated = true; break;}
        if(m_audio_active_isSet){ isObjectUpdated = true; break;}
        if(m_audio_stereo_isSet){ isObjectUpdated = true; break;}
        if(m_volume_isSet){ isObjectUpdated = true; break;}
        if(udp_address != nullptr && *udp_address != QString("")){ isObjectUpdated = true; break;}
        if(m_udp_port_isSet){ isObjectUpdated = true; break;}
        if(m_audio_port_isSet){ isObjectUpdated = true; break;}
        if(m_rgb_color_isSet){ isObjectUpdated = true; break;}
        if(title != nullptr && *title != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
