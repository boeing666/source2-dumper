#pragma once

enum VoiceDataFormat_t : uint32_t  // sizeof 0x4
{
    VOICEDATA_FORMAT_STEAM = 0,
    VOICEDATA_FORMAT_ENGINE = 1,
    VOICEDATA_FORMAT_OPUS = 2,
};
