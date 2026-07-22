#pragma once

struct EntityIOQueuePrioritizedEvent_t  // sizeof 0x70, align 0x8 (entity2) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x4]; // offset 0x0
    GameTime_t m_flFireTime; // offset 0x4, size 0x4, align 255
    EntityIOTargetType_t m_targetType; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlSymbolLarge m_pTarget; // offset 0x10, size 0x8, align 8
    CUtlSymbolLarge m_pTargetInput; // offset 0x18, size 0x8, align 8
    CEntityHandle m_hActivator; // offset 0x20, size 0x4, align 4
    CEntityHandle m_hCaller; // offset 0x24, size 0x4, align 4
    CEntityHandle m_hEntTarget; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
    CVariantBase< CVariantDefaultAllocator > m_variantValue; // offset 0x30, size 0x10, align 8 | MKV3TransferSaveOpsForField
    char _pad_0040[0x30]; // offset 0x40
};
