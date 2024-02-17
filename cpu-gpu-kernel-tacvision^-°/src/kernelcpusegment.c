Modified
#include <stdio.h>
#include <stdint.h>

int main() {
    // Örnek 64-bit veri
    uint64_t data = 0xFFFFFFFFFFFFFFFF;  // Bu örnekte tüm bitleri 1 olan bir veri

    // Başlangıç konumu belirleyin
    int start_bit = 64;

    // Segment uzunluğunu belirleyin
    int segment_length = 1024;

    // Bit segmentini maskeleme işlemiyle alın
    uint64_t mask = ((1ULL << segment_length) - 1) << start_bit;
    uint64_t segment = (data & mask) >> start_bit;

    // Sonucu göster
    printf("Bit Segment: %llx\n", segment);

    return 0;
}
