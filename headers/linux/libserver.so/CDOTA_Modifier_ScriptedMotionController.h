#pragma once

class CDOTA_Modifier_ScriptedMotionController : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    HSCRIPT m_hHorizontalControlFunction; // offset 0x1A78, size 0x8, align 8
    HSCRIPT m_hVerticalControlFunction; // offset 0x1A80, size 0x8, align 8
    HSCRIPT m_hOnDestroyFunction; // offset 0x1A88, size 0x8, align 8
    CVariantBase< CVariantDefaultAllocator > m_parameterTable; // offset 0x1A90, size 0x10, align 8
};
