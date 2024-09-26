
Bạn được cho một mảng số nguyên x2, x3, ..., xn. Nhiệm vụ của bạn là tìm một mảng bất kỳ a1, a2, ..., an thỏa mãn các điều kiện sau:

Giới hạn: 1 ≤ ai ≤ 10^9 với mọi 1 ≤ i ≤ n.
Điều kiện chia hết: xi = ai mod a1 với mọi 2 ≤ i ≤ n.
Ở đây, c mod d biểu thị số dư của phép chia số nguyên c cho số nguyên d. Ví dụ: 5 mod 2 = 1, 72 mod 3 = 0, 143 mod 14 = 3.

Lưu ý: Nếu có nhiều hơn một mảng a thỏa mãn điều kiện, bạn chỉ cần tìm ra một mảng bất kỳ.

Đầu vào:

Dòng đầu tiên chứa một số nguyên duy nhất t (1 ≤ t ≤ 10^4) biểu thị số lượng trường hợp kiểm tra.

Dòng đầu tiên của mỗi trường hợp kiểm tra chứa một số nguyên duy nhất n (2 ≤ n ≤ 500) - số lượng phần tử trong mảng a.

Dòng thứ hai của mỗi trường hợp kiểm tra chứa n-1 số nguyên x2, x3, ..., xn (1 ≤ xi ≤ 500) - các phần tử của mảng x.

Đảm bảo rằng tổng các giá trị n trên tất cả các trường hợp kiểm tra không vượt quá 2*10^5.

Dữ liệu ra:

Đối với mỗi trường hợp kiểm tra, xuất ra một mảng a1, a2, ..., an (1 ≤ ai ≤ 10^9) bất kỳ thỏa mãn điều kiện của bài toán.

Giải quyết:

Chúng ta đọc số lượng test case t và số phần tử n cho mỗi test case.

Đọc mảng x từ x[2] đến x[n].

Chọn a[1] = 501, lớn hơn giá trị max có thể của x (500).

Với mỗi i từ 2 đến n,  a[i] = a[i-1] + x[i].

In ra mảng a.
          
