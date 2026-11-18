#pragma once

struct ChoreoAnimSlotNetworkedData_t  // sizeof 0x48, align 0xFF [vtable] (server)
{
    char _pad_0000[0x30]; // offset 0x0
    CGlobalSymbol m_sSlotID; // offset 0x30, size 0x8, align 8
    CUtlBinaryBlock m_taskList; // offset 0x38, size 0x10, align 8
};
