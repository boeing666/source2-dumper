#pragma once

class CAI_ScriptConditionsElement  // sizeof 0x1C, align 0xFF [trivial_dtor] (server)
{
public:
    CHandle< CBaseEntity > m_hActor; // offset 0x0, size 0x4, align 4
    CSimTimer m_Timer; // offset 0x4, size 0xC, align 255
    CSimTimer m_Timeout; // offset 0x10, size 0xC, align 255
};
