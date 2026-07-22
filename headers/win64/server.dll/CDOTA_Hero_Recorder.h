#pragma once

class CDOTA_Hero_Recorder : public CBaseEntity /*0x0*/  // sizeof 0x4A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    bool m_bStartRecording; // offset 0x498, size 0x1, align 1
    char _pad_0499[0x3]; // offset 0x499
    CHandle< CDOTA_BaseNPC > m_hHero; // offset 0x49C, size 0x4, align 4
    CHandle< CDOTAPlayerController > m_hPlayer; // offset 0x4A0, size 0x4, align 4
    GameTime_t m_flStartRecordingTime; // offset 0x4A4, size 0x4, align 255
};
