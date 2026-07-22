#pragma once

class CGameChoreoServices : public IChoreoServices /*0x0*/  // sizeof 0x20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CHandle< CBaseModelEntity > m_hOwner; // offset 0x8, size 0x4, align 4
    CHandle< CScriptedSequence > m_hScriptedSequence; // offset 0xC, size 0x4, align 4
    IChoreoServices::ScriptState_t m_scriptState; // offset 0x10, size 0x4, align 4
    IChoreoServices::ChoreoState_t m_choreoState; // offset 0x14, size 0x4, align 4
    GameTime_t m_flTimeStartedState; // offset 0x18, size 0x4, align 255
    char _pad_001C[0x4]; // offset 0x1C
};
