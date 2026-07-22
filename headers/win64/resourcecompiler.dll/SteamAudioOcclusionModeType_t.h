#pragma once

enum SteamAudioOcclusionModeType_t : uint32_t  // sizeof 0x4
{
    SA_OCCLUSIONMODE_NONE = 0,
    SA_OCCLUSIONMODE_NOTRANSMISSION = 1,
    SA_OCCLUSIONMODE_FREQINDEPENDENT = 2,
    SA_OCCLUSIONMODE_FREQDEPENDENT = 3,
};
