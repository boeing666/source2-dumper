#pragma once

class CAI_BaseNPCGraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x180, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CAnimGraphParamRef< CGlobalSymbol > m_sCurrScheduleName; // offset 0xC0, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sCurrTaskName; // offset 0xF0, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_pszNPCState; // offset 0x120, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sCurrMovementName; // offset 0x150, size 0x30, align 8
};
