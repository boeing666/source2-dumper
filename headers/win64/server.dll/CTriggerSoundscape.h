#pragma once

class CTriggerSoundscape : public CBaseTrigger /*0x0*/  // sizeof 0xA58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    CHandle< CEnvSoundscapeTriggerable > m_hSoundscape; // offset 0xA30, size 0x4, align 4
    char _pad_0A34[0x4]; // offset 0xA34
    CUtlSymbolLarge m_SoundscapeName; // offset 0xA38, size 0x8, align 8
    CUtlVector< CHandle< CBasePlayerPawn > > m_spectators; // offset 0xA40, size 0x18, align 8
};
