#pragma once

class CTriggerSoundscape : public CBaseTrigger /*0x0*/  // sizeof 0x9F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9D0]; // offset 0x0
    CHandle< CEnvSoundscapeTriggerable > m_hSoundscape; // offset 0x9D0, size 0x4, align 4
    char _pad_09D4[0x4]; // offset 0x9D4
    CUtlSymbolLarge m_SoundscapeName; // offset 0x9D8, size 0x8, align 8
    CUtlVector< CHandle< CBasePlayerPawn > > m_spectators; // offset 0x9E0, size 0x18, align 8
};
