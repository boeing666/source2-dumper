#pragma once

struct PulseRegisterMap_t  // sizeof 0x30, align 0xFF (pulse_runtime_lib)
{
    KeyValues3 m_Inparams; // offset 0x0, size 0x10, align 8
    CKV3MemberNameSet m_InparamsWhichCanBeMoved; // offset 0x10, size 0x10, align 8
    KeyValues3 m_Outparams; // offset 0x20, size 0x10, align 8
};
