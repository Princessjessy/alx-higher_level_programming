#include<Python.h>

/**
 * print_python_list_info - Prints basic info about Python lists.
 * @p: A PyObject list.
 */
void print_python_list_info(PyObject *p)
{
	int siz, allc, index;
	PyObject *obj;

	siz = Py_SIZE(p);
	allc = ((PyListObject *)p)->allocated;

	printf("[*] Size of the Python List = %d\n", siz);
	printf("[*] Allocated = %d\n", allc);

	for (index = 0; index < siz; index++)
	{
		printf("Element %d: ", index);

		obj = PyList_GetItem(p, index);
		printf("%s\n", Py_TYPE(obj)->tp_name);
	}
}
