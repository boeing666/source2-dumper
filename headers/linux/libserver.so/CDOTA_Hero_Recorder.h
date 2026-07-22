#pragma once

class CDOTA_Hero_Recorder : public CBaseEntity /*0x0*/  // sizeof 0x788, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bStartRecording; // offset 0x778, size 0x1, align 1
    char _pad_0779[0x3]; // offset 0x779
    CHandle< CDOTA_BaseNPC > m_hHero; // offset 0x77C, size 0x4, align 4
    CHandle< CDOTAPlayerController > m_hPlayer; // offset 0x780, size 0x4, align 4
    GameTime_t m_flStartRecordingTime; // offset 0x784, size 0x4, align 255
};
