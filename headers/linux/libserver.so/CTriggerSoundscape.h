#pragma once

class CTriggerSoundscape : public CBaseTrigger /*0x0*/  // sizeof 0xCC0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC9C]; // offset 0x0
    CHandle< CEnvSoundscapeTriggerable > m_hSoundscape; // offset 0xC9C, size 0x4, align 4
    CUtlSymbolLarge m_SoundscapeName; // offset 0xCA0, size 0x8, align 8
    CUtlVector< CHandle< CBasePlayerPawn > > m_spectators; // offset 0xCA8, size 0x18, align 8
};
