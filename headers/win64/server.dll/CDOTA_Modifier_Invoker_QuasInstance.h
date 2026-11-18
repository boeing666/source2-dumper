#pragma once

class CDOTA_Modifier_Invoker_QuasInstance : public CDOTA_Modifier_Invoker_Instance /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 hp_regen_per_instance; // offset 0x1AF8, size 0x4, align 4
    char _pad_1AFC[0x4]; // offset 0x1AFC
    char* m_pSlotName; // offset 0x1B00, size 0x8, align 8
};
