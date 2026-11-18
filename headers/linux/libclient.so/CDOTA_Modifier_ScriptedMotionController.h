#pragma once

class CDOTA_Modifier_ScriptedMotionController : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    HSCRIPT m_hHorizontalControlFunction; // offset 0x1AF8, size 0x8, align 8
    HSCRIPT m_hVerticalControlFunction; // offset 0x1B00, size 0x8, align 8
    HSCRIPT m_hOnDestroyFunction; // offset 0x1B08, size 0x8, align 8
    CVariantBase< CVariantDefaultAllocator > m_parameterTable; // offset 0x1B10, size 0x10, align 8
};
